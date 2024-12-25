#include <iostream>
#include <windows.h>
using namespace std;

void sort(int arr[], int size)
{
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }

            
        }
            if (!swapped)
            {
                break;
            }
        
    }
    
}


int main()
{
int arr2[] = {333,4543,242,8794, 3902, 5612, 9284, 2943, 8347, 7264, 1938, 3945, 1452,
    9352, 6058, 3629, 4763, 1056, 6724, 3946, 8957, 2408, 9184,
    7612, 5014, 8372, 6405, 3496, 5734, 6289, 9102, 1843, 9275,
    4810, 2497, 8936, 5723, 1937, 6205, 7524, 3546, 8903, 2751,
    6952, 3082, 6420, 8592, 4037, 7052, 2394, 8591, 6017, 4720,
    8942, 5073, 2849, 3729, 2830, 9573, 1254, 4827, 6703, 5938,
    9402, 3782, 4173, 7295, 2930, 8324, 1742, 9047, 3098, 7282,
    1624, 5273, 3924, 8294, 1038, 6193, 7821, 5037, 2948, 5120,
    8209, 4831, 1994, 1728, 2365, 7213, 4018, 6051, 9621, 7819,
    4970, 4853, 9368, 5061, 8432, 1976, 8614, 2897, 5290, 5189,
    2123, 6541, 3965, 1782, 7404, 9564, 6093, 4157, 6802, 3705,
    1476, 2048, 2441, 3525, 4895, 9335, 2978, 5205, 4029, 9429,
    6801, 6475, 8537, 9441, 6218, 9450, 7476, 3205, 1744, 1671,
    1253, 7955, 1192, 8354, 9508, 7671, 9604, 4478, 4467, 5465,
    2037, 5886, 5221, 6619, 9386, 4535, 3767, 6267, 7752, 7661,
    2409, 4574, 9291, 3633, 1443, 9267, 3174, 2951, 2214, 1177,
    6828, 7793, 7857, 9530, 7737, 9072, 6804, 1975, 1007, 8322,
    6484, 1069, 6124, 9116, 3359, 2956, 8690, 6671, 8746, 6946,
    4919, 7845, 9308, 2670, 6127, 7410, 8256, 3341, 6094, 6159,
    6694, 4384, 3893, 3007, 3897, 4218, 2305, 7262, 5352, 1467,
    7867, 7585, 7574, 2493, 7521, 6758, 4712, 2417, 7989, 1632,
    1749, 7233, 8007, 1225, 7880, 2308, 3363, 9829, 6942, 8351,
    1349, 1085, 4792, 7762, 3489, 8323, 9075, 2564, 1223, 5415,
    8762, 4879, 3049, 2793, 8273, 3189, 2185, 3947, 6338, 2473,
    4297, 9545, 9260, 9534, 8498, 9821, 4519, 9241, 8329, 2942,
    1061, 4612, 6330, 3475, 3204, 3727, 1039, 3773, 7212, 2023,
    9789, 7230, 3294, 4484, 8687, 2323, 2363, 5958, 7087, 9683,
    1092, 6265, 7307, 2212, 1303, 6391, 4041, 2433, 6019, 5955,
    4700, 7022, 2589, 7550, 4822, 5531, 4285, 9810, 1790, 7478,
    7981, 8125, 2293, 2557, 1102, 1052, 8390, 1228, 9543, 1715,
    4324,34,3232,21,32,1,21,4,45,43,2,434,422,4242,1,4,6,2,54,2,
    532,23,453,34,5,5,55,534,5,3,5664,3,53,53,53,543,54322,5432,
    65432,6543,65432,2334,5432,6543,566543,6543,543,543,3159, 7423, 9817, 2345, 2981, 8763, 9284, 3409, 1234, 5678,
    543, 987, 2234, 567, 786, 2341, 9837, 5432, 6767, 4321,
    2134, 7698, 8764, 1245, 432, 7845, 9845, 6783, 2347, 5423,
    8756, 2984, 6500, 8901, 6593, 2394, 7645, 8764, 1287, 3982,
    2323, 4589, 6721, 2457, 9846, 8754, 4927, 2946, 5734, 1729,
    6943, 7594, 9274, 6485, 4869, 8323, 9075, 2385, 4764, 5671,
    2924, 4908, 1278, 9021, 4985, 8367, 9732, 4876, 7581, 6583,
    9735, 4973, 2301, 9876, 6437, 2504, 6345, 1290, 7427, 9835,
    9283, 7352, 5369, 2319, 4692, 8902, 6592, 4967, 7512, 2645,
    1928, 2904, 5097, 6420, 7346, 6594, 8312, 1359, 4067, 8392,
    6372, 4859, 7365, 2495, 7639, 8239, 6734, 9375, 4853, 2987,
    3492, 5639, 9723, 8464, 6382, 2794, 1923, 8609, 8294, 7598,
    6219, 5017, 8472, 7258, 4139, 1593, 7264, 5826, 3817, 9267,
    3721, 1847, 9186, 4365, 5904, 1273, 7384, 4572, 6730, 1504,
    8721, 1296, 4920, 6841, 2657, 2384, 3209, 4953, 5832, 7270,
    8490, 7439, 3249, 5901, 9360, 7293, 4369, 8502, 7532, 9683,
    7580, 6492, 2034, 5149, 8476, 9563, 4601, 3583, 7246, 3749,
    4713, 8531, 6942, 7486, 9299, 6920, 4537, 8743, 9321, 1063,
    1324, 2564, 8043, 1843, 2164, 1839, 6795, 4578, 9304, 2685,
    1276, 1837, 6304, 9320, 3491, 4729, 2371, 2921, 3194, 3852,
    1453, 8328, 1536, 6824, 2923, 5689, 5327, 7473, 8152, 9345,
    1264, 9302, 4852, 7684, 6179, 6027, 3916, 5721, 1823, 2982,
    3198, 4906, 9368, 9405, 5620, 9237, 6049, 4794, 7934, 3241,
    2367, 7416, 8201, 5182, 9142, 2839, 6748, 5216, 8199, 3892,
    6015, 6287, 3462, 4786, 4503, 5614, 1925, 2874, 4595, 4791,
    5107, 1932, 3598, 5264, 7587, 4875, 6959, 3519, 4732, 6581,
    7489, 6233, 1360, 2940, 3047, 7243, 3789, 6590, 1754, 9440,
    5285, 8162, 9417, 8508, 5274, 5607, 9213, 5641, 3547, 6728,
    2561, 4082, 6929, 9427, 8057, 3155, 6139, 3254, 5261, 2187,
    4735, 8527, 4724, 1731, 7389, 2831, 8042, 8381, 2962, 2826,
    8528, 4841, 7374, 2780, 5228, 1467, 8253, 8277, 9746, 6171,
    5839, 3929, 1983, 4672, 1935, 9328, 4302, 1954, 2478, 3319,
    7289, 1585, 5142, 5064, 3544, 3791, 9512, 2959, 1209, 5109,
    9736, 8321, 4935, 8399, 1645, 7863, 3168, 9510, 7106, 5633,
    6537, 5435, 9449, 5728, 9155, 1893, 6232, 5404, 5741, 2662,1, 2, 4, 55, 323, 33, 22, 12, 244, 953, 874, 112, 652, 823, 928,
    171, 324, 222, 125, 784, 438, 933, 653, 731, 882, 1111, 2345, 6789,
    450, 322, 980, 472, 285, 1389, 457, 308, 1493, 11, 456, 3234, 289,
    502, 2224, 956, 6721, 115, 348, 222, 300, 509, 8232, 7645, 1267,
    2347, 156, 149, 302, 59, 743, 999, 1345, 768, 212, 22, 878, 654,
    3, 1285, 1309, 1047, 33, 2904, 558, 762, 290, 47, 534, 2198, 19,
    4747, 803, 334, 99, 3254, 758, 531, 2627, 774, 915, 9345, 848, 5097,
    3484, 3948, 2635, 923, 7681, 2456, 2223, 6004, 702, 810, 313, 504,
    1254, 3512, 9999, 84, 4912, 999, 54, 789, 764, 100, 202, 176, 77,
    6537, 551, 465, 327, 478, 112, 68, 374, 567, 2950, 8204, 1110, 7002,
    52, 1045, 5678, 944, 3194, 993, 3223, 1562, 4723, 3034, 9023, 1234,
    110, 543, 8203, 5876, 9442, 3921, 3421, 618, 1924, 783, 2736, 1575,
    7893, 5679, 4230, 2283, 2143, 777, 4456, 8990, 9374, 604, 529, 2833,
    4178, 5352, 3245, 2286, 4923, 1211, 664, 2357, 9181, 1123, 9385, 825,
    2371, 5431, 4937, 4324, 6652, 2948, 9823, 1177, 6029, 1978, 7465, 3427,
    674, 873, 2511, 6395, 8767, 5629, 4428, 1967, 3992, 5310, 9743, 1992,
    3400, 2847, 2499, 688, 508, 6481, 7045, 8334, 4792, 9293, 5923, 3814,
    8321, 1693, 7262, 3899, 5307, 842, 3078, 4301, 1012, 4237, 6823, 7599,
    2737, 5376, 8142, 8361, 5065, 1291, 9475, 2758, 9137, 6528, 4133, 9062,
    2046, 1973, 5680, 3505, 2960, 1509, 6342, 3054, 3598, 914, 2797, 2439,
    6541, 6124, 4637, 2065, 9734, 9058, 5824, 682, 3764, 1386, 4274, 8761,
    2995, 1231, 8765, 8978, 7987, 9502, 4367, 6258, 5823, 1423, 3567, 9278,
    5472, 5245, 4153, 9237, 2139, 1200, 5506, 8004, 9863, 6874, 2789, 834,
    9212, 3540, 7513, 7923, 2372, 1994, 7290, 5390, 9044, 2389, 5555, 9042,
    6487, 2316, 3499, 8699, 3186, 8195, 1072, 1943, 5727, 991, 8461, 2465,
    2838, 2840, 7624, 3433, 4087, 8278, 1204, 2113, 9372, 445, 4695, 5497,
    5429, 1536, 3356, 5047, 2703, 5289, 3127, 7728, 1241, 7983, 6805, 4567,
    2787, 5830, 6239, 8469, 4556, 9751, 5012, 1454, 8380, 3571, 4463, 3846,
    2358, 6953, 1362, 9536, 8046, 7092, 4376, 7849, 4236, 5138, 902, 3942,
    9517, 8327, 8509, 8386, 2835, 7734, 2722, 6340, 3023, 4874, 456, 3147,
    7451, 2534, 1773, 3067, 7659, 4152, 9825, 1422, 1699, 3192, 4342, 2543,
    3920, 1337, 5781, 8174, 7685, 2523, 9412, 2161, 7024, 9285, 7885, 4689,
    8158, 5859, 2998, 6819, 1498, 2530, 2483, 2763, 4915, 8369, 6284, 7356,
    1482, 3141, 7285, 8191, 4701, 5378, 6947, 8349, 6549, 5685, 3843, 7596,
    7990, 8698, 3318, 2380, 6098, 6576, 7839, 1288,(long)53545423335, 4698, 5946, 8772, 7962};
    int arr[] = {    517, 622, 90, 281, 517, 856, 721, 835, 74, 242,
    669, 781, 473, 528, 674, 763, 259, 869, 890, 302,
    889, 415, 174, 162, 455, 105, 727, 618, 788, 274,
    546, 208, 99, 341, 400, 628, 48, 734, 892, 134,
    263, 206, 939, 455, 689, 39, 37, 712, 235, 10,
    147, 806, 143, 402, 402, 777, 869, 24, 767, 141,
    287, 239, 351, 957, 60, 824, 241, 537, 842, 826,
    800, 898, 772, 757, 969, 114, 147, 129, 108, 931,
    28, 883, 489, 528, 301, 703, 920, 697, 150, 354,
    979, 152, 548, 248, 246, 143, 801, 577, 262, 81,
    283, 857, 524, 420, 132, 288, 759, 913, 256, 141,
    290, 939, 842, 412, 368, 39, 791, 692, 493, 577,
    114, 656, 301, 563, 722, 455, 935, 23, 628, 588,
    32, 710, 246, 444, 944, 602, 50, 156, 322, 973,
    39, 333, 705, 467, 152, 17, 110, 923, 202, 372,
    341, 968, 133, 267, 216, 56, 908, 274, 506, 765,
    185, 500, 107, 756, 845, 801, 592, 904, 116, 510,
    325, 142, 41, 877, 217, 919, 378, 497, 574, 111,
    180, 528, 614, 240, 23, 205, 474, 129, 79, 229,
    705, 378, 497, 239, 818, 700, 642, 473, 206, 219,
    938, 309, 263, 88, 501, 216, 559, 331, 455, 228,
    775, 617, 902, 828, 426, 523, 298, 609, 827, 249,
    776, 789, 957, 806, 315, 244, 627, 742, 300, 141,
    568, 102, 16, 397, 631, 459, 748, 282, 981, 929,
    767, 235, 531, 150, 926, 690, 115, 964, 278, 794,
    618, 380, 939, 187, 397, 907, 74, 712, 722, 623,
    797, 455, 465, 442, 32, 155, 428, 23, 193, 518,
    560, 266, 176, 10, 56, 634, 738, 457, 329, 60,
    359, 582, 231, 372, 307, 568, 676, 168, 93, 493,
    270, 728, 350, 722, 661, 275, 248, 263, 243, 346,
    122, 135, 789, 535, 604, 973, 154, 325, 890, 497,
    171, 956, 967, 829, 379, 298, 801, 285, 739, 347,
    894, 682, 475, 612, 42, 616, 798, 385, 812, 292,
    312, 513, 194, 232, 155, 728, 922, 605, 74, 717,
    394, 677, 430, 381, 340, 328, 463, 204, 987, 915,
    160, 763, 232, 302, 241, 954, 849, 344, 457, 421,
    727, 471, 574, 93, 120, 329, 305, 698, 431, 124,
    210, 163, 307, 246, 515, 852, 924, 273, 870, 438,
    467, 334, 563, 953, 670, 707, 626, 158, 729, 499,
    118, 888, 768, 347, 463, 320, 141, 604, 875, 227,
    467, 632, 404, 392, 167, 826, 391, 298, 963, 923,
    916, 372, 607, 213, 802, 131, 110, 778, 477, 713,
    253, 526, 252, 550, 249, 357, 358, 531, 931, 367,
    830, 783, 709, 924, 354, 568, 391, 497, 173, 526,915, 672, 117, 847, 721, 381, 544, 191, 774, 968,
    541, 320, 611, 292, 510, 905, 669, 625, 868, 496,
    459, 307, 603, 85, 134, 509, 526, 474, 617, 142,
    968, 906, 496, 537, 674, 40, 637, 457, 509, 321,
    174, 653, 335, 126, 798, 482, 989, 232, 74, 471,
    510, 617, 797, 296, 323, 41, 433, 168, 563, 377,
    659, 352, 593, 818, 896, 576, 734, 108, 259, 502,
    110, 635, 501, 322, 379, 399, 42, 806, 666, 122,
    81, 512, 316, 101, 482, 68, 727, 14, 759, 396,
    325, 903, 407, 749, 157, 582, 295, 881, 39, 745,
    703, 499, 55, 378, 474, 643, 660, 380, 728, 363,
    90, 31, 47, 416, 319, 907, 249, 170, 185, 56,
    464, 857, 748, 694, 365, 301, 30, 948, 944, 528,
    865, 134, 362, 456, 138, 406, 547, 315, 758, 27,
    707, 771, 135, 686, 644, 726, 607, 875,10000, 693, 699,
    738, 843, 666, 724, 123, 899, 544, 843, 970, 613,
    982, 50, 195, 274, 551, 90, 736, 418, 125, 762,
    243, 154, 453, 64, 704, 102, 27, 887, 418, 464,
    179, 719, 340, 755, 905, 710, 710, 477, 274, 173,
    588, 410, 735, 875, 32, 453, 929, 679, 346, 352,
    876, 133, 445, 783, 130, 778, 528, 59, 557, 281,
    978, 617, 991, 707, 868, 109, 670, 361, 257, 508,
    698, 47, 77, 830, 290, 831, 79, 999, 36, 49,
    579, 19, 748, 351, 489, 909, 175, 876, 366, 705,
    945, 800, 667, 736, 468, 370, 181, 517, 22, 464,
    72, 908, 923, 772, 31, 417, 263, 615, 42, 506,
    439, 367, 775, 706, 603, 493, 788, 240, 288, 765,
    144, 952, 820, 321, 211, 356, 39, 373, 614, 756,
    337, 258, 320, 337, 559, 677, 348, 936, 495, 582,
    264, 479, 834, 80, 406, 75, 366, 660, 224, 186,
    400, 159, 664, 538, 599, 98, 960, 45, 933, 756,
    153, 848, 197, 940, 576, 70, 585, 77, 318, 256,
    687, 205, 242, 904, 37, 117, 924, 453, 926, 65,
    134, 498, 222, 464, 718, 815, 679, 324, 428, 127,
    760, 104, 900, 259, 253, 213, 266, 557, 59, 439,
    798, 503, 548, 360, 120, 150, 469, 149, 617, 90,
    292, 25, 120, 181, 924, 539, 335, 191, 107, 523,
    927, 773, 670, 423, 827, 256, 176, 539, 690, 533,
    316, 556, 660, 141, 429, 711, 648, 504, 637, 765,
    232, 361, 519, 929, 107, 939, 804, 700, 696, 408,
    91, 429, 978, 470, 848, 477, 209, 767, 929, 196,
    576, 876, 873, 346, 134, 758, 925, 48, 35, 268,
    763, 70, 918, 249, 389, 725, 389, 367, 116, 938,
    412, 310, 787, 176, 707, 850, 430, 644, 314, 826
};
int size = sizeof(arr) / sizeof(arr[0]);
sort(arr, size);
for (int i = 0; i < size; i++)
{
        cout << "arr["<< i<<"]: "<<arr[i]<<endl;
        Sleep(5);
}


}