#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[51] <= 276.5) {
                            if (x[79] <= 266.5) {
                                if (x[2] <= 303.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[76] <= 894.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[32] <= 347.5) {
                                if (x[20] <= 216.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 414.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #2
                        if (x[39] <= 601.5) {
                            if (x[23] <= 324.0) {
                                if (x[16] <= 208.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[50] <= 282.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[69] <= 359.5) {
                                if (x[26] <= 547.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[67] <= 375.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #3
                        if (x[29] <= 299.0) {
                            if (x[18] <= 217.5) {
                                if (x[79] <= 350.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 324.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[47] <= 347.0) {
                                if (x[78] <= 209.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 444.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #4
                        if (x[27] <= 275.5) {
                            if (x[24] <= 260.5) {
                                if (x[40] <= 866.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[59] <= 1019.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[48] <= 333.5) {
                                if (x[73] <= 247.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[49] <= 601.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[47] <= 347.0) {
                            if (x[76] <= 266.5) {
                                if (x[7] <= 373.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 325.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[17] <= 216.5) {
                                if (x[63] <= 453.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 423.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[15] <= 206.5) {
                            if (x[66] <= 656.0) {
                                if (x[10] <= 138.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[45] <= 396.5) {
                                if (x[69] <= 256.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 342.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[45] <= 348.5) {
                            if (x[73] <= 271.5) {
                                if (x[20] <= 1485.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 320.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[33] <= 402.5) {
                                if (x[18] <= 217.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 496.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #8
                        if (x[48] <= 333.5) {
                            if (x[69] <= 256.0) {
                                if (x[19] <= 1534.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[11] <= 419.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[20] <= 263.5) {
                                if (x[31] <= 303.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[23] <= 437.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #9
                        if (x[12] <= 423.5) {
                            if (x[30] <= 309.5) {
                                if (x[19] <= 218.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 446.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= 319.0) {
                                if (x[79] <= 266.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[31] <= 694.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[47] <= 333.5) {
                            if (x[61] <= 282.5) {
                                if (x[79] <= 274.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[75] <= 1234.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[34] <= 420.5) {
                                if (x[0] <= 204.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[56] <= 384.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[46] <= 340.5) {
                            if (x[69] <= 256.0) {
                                if (x[42] <= 325.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[14] <= 775.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[29] <= 300.5) {
                                if (x[21] <= 218.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[40] <= 594.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[30] <= 321.5) {
                            if (x[21] <= 246.5) {
                                if (x[40] <= 796.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[22] <= 350.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[47] <= 333.5) {
                                if (x[5] <= 336.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 423.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #13
                        if (x[65] <= 394.5) {
                            if (x[22] <= 428.5) {
                                if (x[33] <= 391.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[52] <= 318.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 246.5) {
                                if (x[16] <= 207.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[67] <= 1403.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[40] <= 410.0) {
                            if (x[77] <= 266.0) {
                                if (x[45] <= 261.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 237.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[38] <= 426.5) {
                                if (x[15] <= 203.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 467.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[47] <= 333.5) {
                            if (x[71] <= 254.0) {
                                if (x[42] <= 329.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 648.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 255.5) {
                                if (x[35] <= 333.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[58] <= 987.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #16
                        if (x[26] <= 256.5) {
                            if (x[65] <= 678.5) {
                                if (x[19] <= 210.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 195.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[14] <= 449.0) {
                                if (x[34] <= 428.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[65] <= 243.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[18] <= 234.5) {
                            if (x[65] <= 523.0) {
                                if (x[65] <= 391.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 201.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[45] <= 324.5) {
                                if (x[71] <= 234.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[48] <= 510.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #18
                        if (x[39] <= 547.5) {
                            if (x[71] <= 296.5) {
                                if (x[70] <= 228.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 204.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= 269.5) {
                                if (x[70] <= 374.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[48] <= 320.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[47] <= 338.5) {
                            if (x[24] <= 292.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[4] <= 333.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[15] <= 203.5) {
                                if (x[3] <= 147.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[36] <= 439.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #20
                        if (x[30] <= 302.5) {
                            if (x[46] <= 220.5) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[67] <= 495.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= 389.5) {
                                if (x[51] <= 215.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[57] <= 718.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #21
                        if (x[48] <= 330.5) {
                            if (x[72] <= 228.0) {
                                if (x[21] <= 1375.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 285.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[30] <= 297.0) {
                                if (x[74] <= 381.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[23] <= 521.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #22
                        if (x[49] <= 314.5) {
                            if (x[12] <= 370.0) {
                                if (x[70] <= 315.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[74] <= 236.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[28] <= 298.5) {
                                if (x[24] <= 231.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[38] <= 454.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[23] <= 273.5) {
                            if (x[30] <= 291.5) {
                                if (x[68] <= 472.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[61] <= 503.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= 534.5) {
                                if (x[57] <= 234.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 548.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #24
                        if (x[49] <= 357.5) {
                            if (x[16] <= 417.5) {
                                if (x[33] <= 471.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 254.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[28] <= 312.5) {
                                if (x[32] <= 303.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[41] <= 659.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #25
                        if (x[46] <= 387.0) {
                            if (x[71] <= 227.0) {
                                if (x[42] <= 312.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 232.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[34] <= 417.5) {
                                if (x[44] <= 521.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 502.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #26
                        if (x[51] <= 275.5) {
                            if (x[13] <= 413.5) {
                                if (x[35] <= 683.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[79] <= 270.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 249.5) {
                                if (x[66] <= 376.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 403.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #27
                        if (x[27] <= 268.5) {
                            if (x[14] <= 196.5) {
                                if (x[64] <= 1598.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[36] <= 369.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[46] <= 340.5) {
                                if (x[42] <= 274.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[38] <= 469.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #28
                        if (x[21] <= 267.5) {
                            if (x[26] <= 224.5) {
                                if (x[40] <= 867.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[42] <= 928.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[7] <= 353.5) {
                                if (x[38] <= 469.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[67] <= 236.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #29
                        if (x[23] <= 273.5) {
                            if (x[35] <= 329.5) {
                                if (x[16] <= 249.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 367.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[7] <= 363.5) {
                                if (x[21] <= 421.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[51] <= 265.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[29] <= 304.5) {
                            if (x[5] <= 204.5) {
                                if (x[77] <= 356.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[32] <= 366.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[48] <= 331.0) {
                                if (x[43] <= 300.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[56] <= 385.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #31
                        if (x[64] <= 467.5) {
                            if (x[47] <= 333.5) {
                                if (x[79] <= 266.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 554.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= 262.5) {
                                if (x[50] <= 1368.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 223.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #32
                        if (x[48] <= 330.5) {
                            if (x[72] <= 283.5) {
                                if (x[47] <= 286.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 284.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[68] <= 367.5) {
                                if (x[29] <= 653.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[33] <= 315.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #33
                        if (x[69] <= 358.5) {
                            if (x[46] <= 390.5) {
                                if (x[72] <= 225.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 318.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= 257.5) {
                                if (x[26] <= 224.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 289.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #34
                        if (x[48] <= 330.5) {
                            if (x[77] <= 266.0) {
                                if (x[47] <= 239.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[5] <= 1130.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[23] <= 273.5) {
                                if (x[65] <= 679.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[23] <= 433.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #35
                        if (x[49] <= 367.5) {
                            if (x[26] <= 257.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[7] <= 383.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[64] <= 466.5) {
                                if (x[30] <= 822.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[22] <= 246.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #36
                        if (x[29] <= 299.0) {
                            if (x[72] <= 411.5) {
                                if (x[59] <= 561.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[15] <= 232.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[9] <= 368.0) {
                                if (x[22] <= 445.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[48] <= 325.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #37
                        if (x[28] <= 291.0) {
                            if (x[33] <= 315.5) {
                                if (x[46] <= 622.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[45] <= 1000.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[51] <= 276.5) {
                                if (x[15] <= 464.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[46] <= 545.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #38
                        if (x[48] <= 377.5) {
                            if (x[23] <= 317.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[55] <= 246.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[29] <= 270.0) {
                                if (x[35] <= 335.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[23] <= 430.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #39
                        if (x[40] <= 421.5) {
                            if (x[75] <= 268.5) {
                                if (x[76] <= 225.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[27] <= 257.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[35] <= 423.5) {
                                if (x[2] <= 202.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 458.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #40
                        if (x[18] <= 216.5) {
                            if (x[66] <= 393.0) {
                                if (x[32] <= 403.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[67] <= 522.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[49] <= 293.0) {
                                if (x[73] <= 235.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[20] <= 409.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #41
                        if (x[49] <= 414.5) {
                            if (x[54] <= 227.5) {
                                if (x[48] <= 290.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 329.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 249.5) {
                                if (x[59] <= 519.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 375.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #42
                        if (x[26] <= 265.5) {
                            if (x[65] <= 679.5) {
                                if (x[30] <= 327.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 218.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= 359.5) {
                                if (x[61] <= 256.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[15] <= 388.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #43
                        if (x[19] <= 503.0) {
                            if (x[35] <= 425.5) {
                                if (x[19] <= 238.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[68] <= 189.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[55] <= 242.0) {
                                if (x[18] <= 1468.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[45] <= 348.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[35] <= 399.5) {
                            if (x[14] <= 316.0) {
                                if (x[13] <= 201.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[22] <= 428.5) {
                                if (x[19] <= 193.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 254.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #45
                        if (x[19] <= 454.5) {
                            if (x[36] <= 406.5) {
                                if (x[11] <= 242.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[18] <= 215.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[41] <= 274.5) {
                                if (x[66] <= 247.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[50] <= 283.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #46
                        if (x[52] <= 315.5) {
                            if (x[40] <= 706.5) {
                                if (x[41] <= 314.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 345.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[66] <= 382.5) {
                                if (x[42] <= 542.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[33] <= 292.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #47
                        if (x[11] <= 389.0) {
                            if (x[16] <= 249.5) {
                                if (x[64] <= 560.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[22] <= 413.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[52] <= 270.5) {
                                if (x[46] <= 266.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[77] <= 196.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #48
                        if (x[21] <= 246.5) {
                            if (x[63] <= 539.0) {
                                if (x[35] <= 327.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[40] <= 1188.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[6] <= 334.5) {
                                if (x[22] <= 432.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[43] <= 318.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #49
                        if (x[29] <= 300.5) {
                            if (x[17] <= 214.5) {
                                if (x[37] <= 664.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[64] <= 1322.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[40] <= 412.5) {
                                if (x[64] <= 249.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[50] <= 347.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #50
                        if (x[47] <= 346.5) {
                            if (x[75] <= 258.5) {
                                if (x[47] <= 285.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 305.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[32] <= 393.5) {
                                if (x[8] <= 216.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[23] <= 437.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #51
                        if (x[20] <= 240.5) {
                            if (x[62] <= 479.5) {
                                if (x[45] <= 557.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[78] <= 230.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[12] <= 406.0) {
                                if (x[22] <= 428.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[63] <= 251.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #52
                        if (x[36] <= 406.5) {
                            if (x[67] <= 240.5) {
                                if (x[21] <= 712.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[35] <= 322.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[45] <= 372.5) {
                                if (x[40] <= 410.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 502.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #53
                        if (x[53] <= 254.5) {
                            if (x[13] <= 398.5) {
                                if (x[42] <= 702.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 346.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[29] <= 270.0) {
                                if (x[76] <= 479.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 424.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #54
                        if (x[51] <= 271.5) {
                            if (x[18] <= 502.0) {
                                if (x[13] <= 557.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 1466.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 257.5) {
                                if (x[35] <= 335.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[20] <= 407.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #55
                        if (x[43] <= 431.5) {
                            if (x[70] <= 254.0) {
                                if (x[43] <= 322.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 231.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[37] <= 457.5) {
                                if (x[5] <= 188.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[63] <= 201.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #56
                        if (x[27] <= 269.5) {
                            if (x[35] <= 359.5) {
                                if (x[42] <= 1050.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 199.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[51] <= 272.5) {
                                if (x[15] <= 411.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 686.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #57
                        if (x[29] <= 299.0) {
                            if (x[21] <= 218.5) {
                                if (x[50] <= 1349.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[41] <= 751.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[24] <= 520.5) {
                                if (x[35] <= 424.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[43] <= 322.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #58
                        if (x[49] <= 315.0) {
                            if (x[9] <= 349.5) {
                                if (x[4] <= 194.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 277.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[16] <= 210.5) {
                                if (x[72] <= 413.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[27] <= 482.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #59
                        if (x[33] <= 403.5) {
                            if (x[22] <= 221.5) {
                                if (x[31] <= 170.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 327.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[45] <= 421.0) {
                                if (x[60] <= 242.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[65] <= 131.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #60
                        if (x[13] <= 417.5) {
                            if (x[18] <= 216.5) {
                                if (x[76] <= 320.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 458.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[50] <= 274.0) {
                                if (x[2] <= 418.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[29] <= 843.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #61
                        if (x[48] <= 330.5) {
                            if (x[78] <= 271.5) {
                                if (x[46] <= 299.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[29] <= 319.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[20] <= 262.5) {
                                if (x[39] <= 752.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[49] <= 423.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #62
                        if (x[8] <= 363.5) {
                            if (x[29] <= 304.5) {
                                if (x[74] <= 410.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 440.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[51] <= 258.5) {
                                if (x[70] <= 170.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[30] <= 683.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #63
                        if (x[44] <= 370.5) {
                            if (x[72] <= 257.5) {
                                if (x[41] <= 328.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[38] <= 277.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 274.5) {
                                if (x[30] <= 296.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 421.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #64
                        if (x[27] <= 269.5) {
                            if (x[67] <= 475.5) {
                                if (x[44] <= 952.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[41] <= 1190.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[47] <= 334.5) {
                                if (x[67] <= 239.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 486.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #65
                        if (x[47] <= 346.5) {
                            if (x[76] <= 225.5) {
                                if (x[7] <= 429.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[61] <= 522.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[23] <= 260.5) {
                                if (x[70] <= 504.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[51] <= 400.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #66
                        if (x[49] <= 335.5) {
                            if (x[17] <= 302.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[42] <= 255.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[26] <= 256.5) {
                                if (x[62] <= 532.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[49] <= 577.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #67
                        if (x[47] <= 347.0) {
                            if (x[67] <= 239.5) {
                                if (x[41] <= 332.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[72] <= 797.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[26] <= 267.5) {
                                if (x[40] <= 797.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 435.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #68
                        if (x[50] <= 273.5) {
                            if (x[0] <= 352.5) {
                                if (x[3] <= 368.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[69] <= 256.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[72] <= 413.5) {
                                if (x[32] <= 415.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 201.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #69
                        if (x[3] <= 323.5) {
                            if (x[25] <= 265.5) {
                                if (x[39] <= 639.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[61] <= 1195.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[48] <= 308.0) {
                                if (x[77] <= 267.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[69] <= 137.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #70
                        if (x[46] <= 353.0) {
                            if (x[77] <= 266.0) {
                                if (x[47] <= 286.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[61] <= 370.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[34] <= 417.5) {
                                if (x[28] <= 272.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[20] <= 383.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #71
                        if (x[30] <= 333.5) {
                            if (x[3] <= 209.5) {
                                if (x[69] <= 440.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[69] <= 308.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 345.0) {
                                if (x[26] <= 449.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[70] <= 263.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #72
                        if (x[29] <= 276.5) {
                            if (x[62] <= 617.5) {
                                if (x[30] <= 267.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 253.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[46] <= 344.5) {
                                if (x[43] <= 319.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[36] <= 455.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #73
                        if (x[24] <= 253.5) {
                            if (x[67] <= 521.5) {
                                if (x[74] <= 299.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[78] <= 230.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[45] <= 370.5) {
                                if (x[71] <= 233.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[62] <= 899.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #74
                        if (x[27] <= 269.5) {
                            if (x[34] <= 324.5) {
                                if (x[37] <= 366.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[60] <= 863.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[50] <= 271.5) {
                                if (x[8] <= 352.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[26] <= 455.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #75
                        if (x[45] <= 470.0) {
                            if (x[22] <= 230.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[57] <= 249.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[35] <= 423.5) {
                                if (x[19] <= 218.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[71] <= 137.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #76
                        if (x[45] <= 348.5) {
                            if (x[68] <= 227.5) {
                                if (x[23] <= 1488.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[12] <= 366.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[37] <= 398.5) {
                                if (x[1] <= 205.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 446.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #77
                        if (x[45] <= 370.5) {
                            if (x[67] <= 272.5) {
                                if (x[78] <= 271.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[54] <= 1338.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[25] <= 265.5) {
                                if (x[65] <= 655.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[10] <= 317.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #78
                        if (x[69] <= 359.5) {
                            if (x[39] <= 438.0) {
                                if (x[45] <= 274.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[29] <= 541.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 245.5) {
                                if (x[69] <= 489.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 200.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #79
                        if (x[43] <= 388.5) {
                            if (x[26] <= 257.5) {
                                if (x[64] <= 1448.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[40] <= 344.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[28] <= 271.5) {
                                if (x[72] <= 392.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 435.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #80
                        if (x[53] <= 241.0) {
                            if (x[9] <= 384.0) {
                                if (x[61] <= 216.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[44] <= 308.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= 268.5) {
                                if (x[43] <= 577.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[42] <= 582.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #81
                        if (x[23] <= 273.5) {
                            if (x[68] <= 429.0) {
                                if (x[62] <= 604.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 244.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[48] <= 306.5) {
                                if (x[46] <= 304.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[27] <= 534.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #82
                        if (x[27] <= 298.5) {
                            if (x[13] <= 195.5) {
                                if (x[64] <= 483.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[60] <= 814.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 352.5) {
                                if (x[29] <= 541.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[71] <= 267.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #83
                        if (x[41] <= 388.5) {
                            if (x[60] <= 285.0) {
                                if (x[0] <= 378.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[17] <= 237.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 257.5) {
                                if (x[37] <= 347.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 442.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #84
                        if (x[36] <= 439.5) {
                            if (x[20] <= 449.5) {
                                if (x[15] <= 207.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[78] <= 295.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[45] <= 477.0) {
                                if (x[58] <= 214.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[51] <= 234.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #85
                        if (x[49] <= 369.0) {
                            if (x[52] <= 247.5) {
                                if (x[19] <= 450.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[16] <= 294.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[35] <= 432.5) {
                                if (x[16] <= 210.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[20] <= 409.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #86
                        if (x[49] <= 329.5) {
                            if (x[72] <= 261.0) {
                                if (x[70] <= 131.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 1115.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[35] <= 381.5) {
                                if (x[34] <= 318.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 417.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #87
                        if (x[4] <= 352.5) {
                            if (x[23] <= 240.5) {
                                if (x[65] <= 415.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[28] <= 355.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[71] <= 235.0) {
                                if (x[14] <= 503.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[35] <= 283.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #88
                        if (x[11] <= 401.0) {
                            if (x[35] <= 419.0) {
                                if (x[4] <= 222.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[21] <= 421.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[73] <= 225.0) {
                                if (x[0] <= 396.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[16] <= 1565.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #89
                        if (x[47] <= 343.0) {
                            if (x[67] <= 250.0) {
                                if (x[64] <= 133.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[67] <= 556.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[24] <= 283.5) {
                                if (x[17] <= 214.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[70] <= 265.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #90
                        if (x[15] <= 203.5) {
                            if (x[69] <= 441.0) {
                                if (x[61] <= 473.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        else {
                            if (x[45] <= 360.5) {
                                if (x[66] <= 250.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[35] <= 424.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #91
                        if (x[26] <= 267.5) {
                            if (x[36] <= 480.5) {
                                if (x[40] <= 1224.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[42] <= 390.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[20] <= 460.5) {
                                if (x[60] <= 1017.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[63] <= 228.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #92
                        if (x[32] <= 396.5) {
                            if (x[0] <= 207.5) {
                                if (x[69] <= 440.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[58] <= 256.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[46] <= 386.0) {
                                if (x[70] <= 209.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[53] <= 227.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #93
                        if (x[46] <= 390.5) {
                            if (x[30] <= 281.0) {
                                if (x[50] <= 956.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[48] <= 248.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[66] <= 382.5) {
                                if (x[43] <= 534.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[22] <= 242.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #94
                        if (x[46] <= 341.5) {
                            if (x[75] <= 258.5) {
                                if (x[46] <= 301.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[12] <= 442.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[38] <= 419.5) {
                                if (x[14] <= 196.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[25] <= 435.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #95
                        if (x[26] <= 288.5) {
                            if (x[21] <= 219.0) {
                                if (x[39] <= 891.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[36] <= 410.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[50] <= 322.5) {
                                if (x[15] <= 453.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[19] <= 1293.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #96
                        if (x[22] <= 257.5) {
                            if (x[68] <= 606.0) {
                                if (x[39] <= 782.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[32] <= 327.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[50] <= 266.5) {
                                if (x[6] <= 330.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[46] <= 470.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #97
                        if (x[49] <= 424.5) {
                            if (x[71] <= 296.5) {
                                if (x[50] <= 213.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[12] <= 871.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[32] <= 391.5) {
                                if (x[17] <= 215.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[24] <= 440.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #98
                        if (x[39] <= 600.5) {
                            if (x[28] <= 313.0) {
                                if (x[13] <= 196.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[55] <= 242.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[6] <= 333.5) {
                                if (x[37] <= 463.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[17] <= 488.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #99
                        if (x[36] <= 407.0) {
                            if (x[18] <= 226.5) {
                                if (x[3] <= 132.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[45] <= 250.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= 399.5) {
                                if (x[68] <= 227.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[15] <= 387.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #100
                        if (x[48] <= 330.5) {
                            if (x[73] <= 256.5) {
                                if (x[67] <= 132.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[62] <= 272.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[38] <= 418.0) {
                                if (x[10] <= 239.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[54] <= 379.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }