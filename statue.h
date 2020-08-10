#ifndef STATUE_DATA
#define STATUE_DATA

#ifdef FLOAT

// The original statue data.
// Unused here; they are pre-scaled in 8.8 fixed-point below.
const float points[][3] = {
    {0.1312855, 0.11608299999999999, -0.5005139999999999},
    {0.1759435, 0.08417239999999998, -0.30605499999999997},
    {0.1881545, 0.045099899999999984, -0.493971},
    {0.1141155, 0.121609, -0.15609299999999998},
    {-0.2043505, -0.005069208000000015, -0.500524},
    {-0.0132122, -0.16079900000000003, -0.500475},
    {-0.00136324, -0.207654, -0.48831699999999995},
    {-0.0980485, -0.144689, -0.37339799999999995},
    {-0.0575441, -0.226394, -0.32951699999999995},
    {-0.1360915, -0.222808, -0.20719299999999996},
    {-0.1982265, -0.21310900000000002, -0.14208899999999997},
    {-0.2593675, -0.10127820000000001, -0.00898462999999997},
    {-0.1442555, -0.255433, -0.004855999999999969},
    {-0.1994965, -0.013462290000000016, 0.08679960000000003},
    {-0.012050700000000001, -0.35365100000000005, -0.317084},
    {-0.0268017, -0.40514700000000003, -0.16825799999999996},
    {0.1829825, -0.08901730000000002, -0.30975699999999995},
    {0.00552359, -0.355947, -0.23569899999999996},
    {0.0738732, -0.23550100000000002, -0.20838099999999996},
    {-0.0176274, -0.267829, -0.06360589999999997},
    {0.1015461, -0.170655, -0.22667799999999996},
    {0.0832779, 0.22674599999999998, -0.49463799999999997},
    {0.1660775, -0.002144540000000015, -0.5005299999999999},
    {-0.0112064, 0.146692, -0.5002709999999999},
    {-0.1709185, 0.07195209999999999, -0.5004949999999999},
    {-0.1737895, -0.0020887300000000148, -0.28097999999999995},
    {-0.1141175, 0.15564199999999997, -0.28894499999999995},
    {-0.1948565, 0.31793799999999994, -0.18319399999999997},
    {-0.1973005, 0.20355499999999999, -0.14462299999999997},
    {-0.2069145, 0.34799199999999997, -0.12264599999999996},
    {-0.2448865, 0.263544, -0.08055889999999997},
    {-0.1484525, 0.190626, 0.03168680000000003},
    {0.0441477, 0.310874, -0.319791},
    {0.0734032, 0.19816299999999998, -0.21589699999999998},
    {0.0350234, 0.29103499999999993, -0.20878999999999998},
    {0.0891931, 0.230399, -0.20241199999999998},
    {-0.022498, 0.208922, 0.01100120000000003},
    {-0.0747171, 0.23556, -0.006002759999999969},
    {-0.0187423, 0.266529, -0.07392389999999997},
    {-0.0121258, 0.36832699999999996, -0.24868299999999996},
    {-0.1714365, 0.09130639999999998, 0.08515510000000003},
    {-0.26329650000000004, 0.17871499999999998, -0.05282979999999997},
    {-0.1309055, 0.209947, -0.21306499999999998},
    {0.00436839, 0.18986399999999998, -0.499046},
    {0.0982157, -0.148762, -0.14656299999999997},
    {-0.0493343, -0.23517200000000002, -0.00801977999999997},
    {-0.0462899, -0.34978600000000004, -0.09937069999999996},
    {0.0722101, -0.268062, -0.451067},
    {-0.0911213, -0.321955, -0.283971},
    {-0.1392085, -0.167384, 0.05784540000000003},
    {-0.2076505, -0.35752800000000007, -0.12254699999999998},
    {-0.2000535, -0.184542, 0.01611590000000003},
    {-0.1958925, -0.00012657000000001507, -0.17006299999999996},
    {-0.2847195, -0.024490600000000015, -0.04710819999999997},
    {-0.1948565, -0.32873600000000003, -0.18319399999999997},
    {-0.1430825, -0.10894700000000002, -0.30228499999999997},
    {-0.0906504, -0.40413699999999997, -0.10060299999999997},
    {0.1336825, -0.12646000000000002, -0.500448},
    {-0.1628955, -0.09426290000000001, -0.500895},
    {0.081494, -0.21802500000000002, -0.5005109999999999},
    {0.1867935, -0.05709730000000002, -0.49672999999999995},
    {-0.25025450000000005, -0.249617, -0.06891029999999997},
    {-0.2826885, 0.010255099999999986, -0.016341399999999968},
    {0.0843189, -0.258537, -0.266879},
    {0.1414065, -0.16438200000000003, -0.38670099999999996},
    {-0.059539800000000004, 0.21639699999999998, -0.32403099999999996},
    {-0.0949759, 0.13241199999999997, -0.389982},
    {-0.0938351, 0.30736399999999997, -0.282273},
    {-0.1590585, 0.37346899999999994, -0.09205399999999997},
    {-0.0264454, 0.35131499999999993, -0.292091},
    {-0.0716357, 0.40514700000000003, -0.10992899999999997},
    {0.1123085, 0.212642, -0.29365899999999995},
    {-0.1606095, -0.39478800000000003, -0.10056799999999996},
    {0.1481935, -0.12006800000000001, 0.21684100000000003},
    {0.1329165, 0.11234599999999999, 0.19849900000000004},
    {0.1259505, 0.047802499999999984, -0.00816395999999997},
    {0.2397725, 0.035340099999999985, 0.23429900000000004},
    {0.1085935, -0.07363620000000001, 0.004796600000000031},
    {0.1972825, -0.008554700000000016, 0.08286880000000003},
    {0.0221811, -0.12060700000000002, 0.07398330000000003},
    {0.016639599999999997, 0.10353699999999999, 0.05847010000000003},
    {0.0940118, -0.07448820000000002, -0.013039299999999969},
    {0.0720521, -0.10662400000000001, -0.06579869999999997},
    {-0.008945, -0.14452, 0.07499650000000004},
    {0.0531191, 0.08103459999999998, -0.06929899999999997},
    {0.0905691, 0.165545, -0.09085859999999997},
    {0.0920331, 0.06202369999999999, -0.02514889999999997},
    {-0.00638759, 0.13713899999999998, 0.07304250000000004},
    {0.0256345, 0.16891199999999998, -0.005596129999999969},
    {0.0996406, -0.15732400000000002, -0.09751389999999997},
    {0.1731885, -0.001246800000000015, -0.48363199999999995},
    {0.1506905, 0.051471299999999984, -0.294583},
    {0.033585000000000004, -0.18920900000000002, -0.02844559999999997},
    {0.1571625, -0.055586400000000015, -0.28217299999999995},
    {-0.0190614, -0.21759, 0.23465000000000003},
    {0.1040095, -0.048988400000000015, 0.500895},
    {0.0166057, -0.177375, 0.422534},
    {0.0181783, -0.215508, 0.34216700000000005},
    {-0.0637375, -0.160588, 0.37627200000000005},
    {-0.1347115, -0.07754210000000002, 0.38638100000000003},
    {-0.1826505, -0.005399000000000015, 0.28035000000000004},
    {-0.1945025, -0.08739600000000002, 0.21224700000000002},
    {-0.1971955, -0.005885851000000015, 0.12177000000000003},
    {-0.1472205, -0.12030400000000001, 0.10274400000000003},
    {0.00592983, -0.232471, 0.14076700000000003},
    {-0.0445045, -0.17866500000000002, 0.11079600000000003},
    {0.0761571, -0.2515, 0.21479600000000004},
    {0.1126105, -0.231967, 0.262857},
    {0.1687555, -0.190667, 0.365449},
    {0.1089135, -0.220317, 0.34544800000000003},
    {0.1838455, -0.11978400000000002, 0.45530000000000004},
    {0.27460249999999997, -0.044075700000000016, 0.339924},
    {0.2847195, 0.018897599999999987, 0.372611},
    {0.28302150000000004, -0.09722750000000001, 0.41636100000000004},
    {0.1777805, -0.18580600000000003, 0.23835600000000004},
    {0.1221715, -0.19239, 0.20991800000000002},
    {-0.0947024, -0.18613100000000002, 0.10898400000000003},
    {0.0624903, -0.17146, 0.17589900000000003},
    {0.2574845, 0.027363499999999985, 0.321025},
    {0.2236655, 0.009116199999999986, 0.44310000000000005},
    {0.0744735, 0.13294899999999998, 0.443454},
    {0.0214095, 0.166425, 0.424472},
    {-0.1309525, 0.056508299999999984, 0.400295},
    {-0.1688815, 0.07021199999999998, 0.281515},
    {-0.1943435, 0.08353899999999999, 0.21435400000000004},
    {-0.2092865, -0.005399000000000015, 0.20628500000000002},
    {-0.1566765, 0.09937699999999998, 0.10611500000000003},
    {0.1688115, 0.18531599999999998, 0.23998000000000003},
    {0.0668563, 0.216553, 0.17899800000000002},
    {0.1244125, 0.22311399999999998, 0.27307000000000003},
    {0.1730115, 0.11085699999999998, 0.455525},
    {0.1255185, 0.052268599999999985, 0.49482200000000004},
    {0.1224685, 0.20624699999999999, 0.34821700000000005},
    {0.2433175, 0.146857, 0.351478},
    {0.2057065, 0.10766299999999998, 0.31313},
    {-0.0008198099999999998, 0.20091599999999998, 0.13469500000000004},
    {0.1135585, 0.12877599999999997, 0.20636300000000002},
    {0.2740775, 0.08558249999999999, 0.42513300000000004},
    {-0.00424905, 0.196177, 0.28420300000000004},
    {0.0785215, 0.236334, 0.23517500000000002},
    {-0.0336921, 0.21145599999999998, 0.21730000000000002},
    {-0.1694865, 0.131622, 0.19300900000000004},
    {-0.0525906, 0.17265699999999998, 0.36086300000000004},
    {-0.0160744, 0.06473199999999998, 0.485074},
    {-0.0811723, 0.163924, 0.09990700000000004},
    {0.1962135, -0.12192400000000002, 0.30391900000000005},
    {0.032091, -0.06341300000000002, 0.49756000000000006},
    {0.2246125, -0.17692000000000002, 0.33546000000000004},
    {-0.0391206, -0.06836130000000001, 0.47437500000000005},
    {-0.1658115, -0.003072950000000015, 0.39170800000000006},
    {-0.1690525, -0.14300600000000002, 0.19135600000000003},
    {-0.0863344, 0.16245099999999998, 0.292793},
    {-0.0914273, -0.17302700000000001, 0.27439600000000003}
};
#define maxx 0.2847195

#else // FLOAT

const int points[][3] = {
    {1176, 1040, -4484},
    {1576, 754, -2742},
    {1685, 404, -4425},
    {1022, 1089, -1398},
    {-1830, -45, -4484},
    {-118, -1440, -4484},
    {-12, -1860, -4375},
    {-878, -1296, -3345},
    {-515, -2028, -2952},
    {-1219, -1996, -1856},
    {-1776, -1909, -1273},
    {-2323, -907, -80},
    {-1292, -2288, -43},
    {-1787, -120, 777},
    {-107, -3168, -2841},
    {-240, -3630, -1507},
    {1639, -797, -2775},
    {49, -3189, -2111},
    {661, -2110, -1867},
    {-157, -2399, -569},
    {909, -1529, -2031},
    {746, 2031, -4431},
    {1488, -19, -4484},
    {-100, 1314, -4482},
    {-1531, 644, -4484},
    {-1557, -18, -2517},
    {-1022, 1394, -2588},
    {-1745, 2848, -1641},
    {-1767, 1823, -1295},
    {-1853, 3118, -1098},
    {-2194, 2361, -721},
    {-1330, 1708, 283},
    {395, 2785, -2865},
    {657, 1775, -1934},
    {313, 2607, -1870},
    {799, 2064, -1813},
    {-201, 1871, 98},
    {-669, 2110, -53},
    {-167, 2388, -662},
    {-108, 3300, -2228},
    {-1536, 818, 762},
    {-2359, 1601, -473},
    {-1172, 1881, -1909},
    {39, 1701, -4471},
    {880, -1332, -1313},
    {-442, -2107, -71},
    {-414, -3134, -890},
    {647, -2401, -4041},
    {-816, -2884, -2544},
    {-1247, -1499, 518},
    {-1860, -3203, -1098},
    {-1792, -1653, 144},
    {-1755, -1, -1523},
    {-2551, -219, -422},
    {-1745, -2945, -1641},
    {-1282, -976, -2708},
    {-812, -3621, -901},
    {1197, -1133, -4484},
    {-1459, -844, -4488},
    {730, -1953, -4484},
    {1673, -511, -4450},
    {-2242, -2236, -617},
    {-2532, 91, -146},
    {755, -2316, -2391},
    {1267, -1472, -3464},
    {-533, 1938, -2903},
    {-850, 1186, -3494},
    {-840, 2753, -2529},
    {-1425, 3346, -824},
    {-236, 3147, -2617},
    {-641, 3630, -984},
    {1006, 1905, -2631},
    {-1439, -3537, -901},
    {1327, -1075, 1942},
    {1190, 1006, 1778},
    {1128, 428, -73},
    {2148, 316, 2099},
    {972, -659, 42},
    {1767, -76, 742},
    {198, -1080, 662},
    {149, 927, 523},
    {842, -667, -116},
    {645, -955, -589},
    {-80, -1294, 671},
    {475, 726, -620},
    {811, 1483, -814},
    {824, 555, -225},
    {-57, 1228, 654},
    {229, 1513, -50},
    {892, -1409, -873},
    {1551, -11, -4333},
    {1350, 461, -2639},
    {300, -1695, -254},
    {1408, -498, -2528},
    {-170, -1949, 2102},
    {931, -438, 4488},
    {148, -1589, 3785},
    {162, -1930, 3065},
    {-571, -1438, 3371},
    {-1207, -694, 3461},
    {-1636, -48, 2511},
    {-1742, -783, 1901},
    {-1766, -52, 1091},
    {-1319, -1077, 920},
    {53, -2082, 1261},
    {-398, -1600, 992},
    {682, -2253, 1924},
    {1008, -2078, 2355},
    {1512, -1708, 3274},
    {975, -1974, 3095},
    {1647, -1073, 4079},
    {2460, -394, 3045},
    {2551, 169, 3338},
    {2535, -871, 3730},
    {1592, -1664, 2135},
    {1094, -1723, 1880},
    {-848, -1667, 976},
    {559, -1536, 1576},
    {2307, 245, 2876},
    {2004, 81, 3970},
    {667, 1191, 3973},
    {191, 1491, 3803},
    {-1173, 506, 3586},
    {-1513, 629, 2522},
    {-1741, 748, 1920},
    {-1875, -48, 1848},
    {-1403, 890, 950},
    {1512, 1660, 2150},
    {599, 1940, 1603},
    {1114, 1999, 2446},
    {1550, 993, 4081},
    {1124, 468, 4433},
    {1097, 1847, 3120},
    {2180, 1315, 3149},
    {1843, 964, 2805},
    {-7, 1800, 1206},
    {1017, 1153, 1849},
    {2455, 766, 3809},
    {-38, 1757, 2546},
    {703, 2117, 2107},
    {-301, 1894, 1947},
    {-1518, 1179, 1729},
    {-471, 1547, 3233},
    {-144, 579, 4346},
    {-727, 1468, 895},
    {1758, -1092, 2723},
    {287, -568, 4458},
    {2012, -1585, 3005},
    {-350, -612, 4250},
    {-1485, -27, 3509},
    {-1514, -1281, 1714},
    {-773, 1455, 2623},
    {-819, -1550, 2458}
};

#define MAXX 2551

#endif

#endif
