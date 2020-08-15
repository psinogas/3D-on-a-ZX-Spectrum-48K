# This build depends on z88dk.
# If it's not packaged in your distribution, do this:
#
# mkdir -p ~/Github/
# cd ~/Github/
# git clone https://github.com/z88dk/z88dk/
# cd z88dk
# git submodule init
# git submodule update
# ./build.sh
#
# You can now use the cross compiler - just put these in your
# enviroment (e.g. in your .profile):
#
# export PATH=$HOME/Github/z88dk/bin:$PATH
# export ZCCCFG=$HOME/Github/z88dk/lib/config

EXE:=statue.tap

Q=@
ifeq ($V,1)
Q=
endif

all:	${EXE}

${EXE}:	statue.c $(wildcard *.h)
	${Q}echo "[CC] " $<
	${Q}zcc +zx -lndos -create-app -O3 -o statue $< -lm
	${Q}rm -f statue *.bin zcc_opt.def
	${Q}echo "[LD] " $@

run:	${EXE}
	fuse $<

runfast:	${EXE}
	fuse --speed 250 $<

clean:
	${Q}echo "[CLEAN]"
	${Q}rm -rf ${EXE}

# For pure-C builds, this takes the speed up from 5.4 to 6.0 fps.
optimize1:
	zcc +zx -lndos -create-app -O2 --opt-code-speed=all -Cc-unsigned -o statue statue.c -lm

# This apparently messes up the FPS counting (i.e. the "clock()" calls).
# It does appear to be a bit faster than "optimize1", 6.1 fps maybe.
optimize2:
	zcc +zx -compiler=sdcc -SO3 -lndos -create-app -O2 --opt-code-speed=all -Cc-unsigned -o statue statue.c -lmath48
