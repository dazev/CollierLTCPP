#pragma once 

#ifndef COLLIERLTCPP_H
#define COLLIERLTCPP_H

#define aa0 0
#define aa00 3
#define Naa 6

#define bb0 0
#define bb1 3
#define bb00 6
#define bb11 9
#define bb001 12
#define bb111 15
#define dbb0 18
#define dbb1 21
#define dbb00 24
#define dbb11 27
#define dbb001 30
#define Nbb 33

#define cc0 0
#define cc1 3
#define cc2 6
#define cc00 9
#define cc11 12
#define cc12 15
#define cc22 18
#define cc001 21
#define cc002 24
#define cc111 27
#define cc112 30
#define cc122 33
#define cc222 36
#define cc0000 39
#define cc0011 42
#define cc0012 45
#define cc0022 48
#define cc1111 51
#define cc1112 54
#define cc1122 57
#define cc1222 60
#define cc2222 63
#define Ncc 66

#define dd0 0
#define dd1 3
#define dd2 6
#define dd3 9
#define dd00 12
#define dd11 15
#define dd12 18
#define dd13 21
#define dd22 24
#define dd23 27
#define dd33 30
#define dd001 33
#define dd002 36
#define dd003 39
#define dd111 42
#define dd112 45
#define dd113 48
#define dd122 51
#define dd123 54
#define dd133 57
#define dd222 60
#define dd223 63
#define dd233 66
#define dd333 69
#define dd0000 72
#define dd0011 75
#define dd0012 78
#define dd0013 81
#define dd0022 84
#define dd0023 87
#define dd0033 90
#define dd1111 93
#define dd1112 96
#define dd1113 99
#define dd1122 102
#define dd1123 105
#define dd1133 108
#define dd1222 111
#define dd1223 114
#define dd1233 117
#define dd1333 120
#define dd2222 123
#define dd2223 126
#define dd2233 129
#define dd2333 132
#define dd3333 135
#define dd00001 138
#define dd00002 141
#define dd00003 144
#define dd00111 147
#define dd00112 150
#define dd00113 153
#define dd00122 156
#define dd00123 159
#define dd00133 162
#define dd00222 165
#define dd00223 168
#define dd00233 171
#define dd00333 174
#define dd11111 177
#define dd11112 180
#define dd11113 183
#define dd11122 186
#define dd11123 189
#define dd11133 192
#define dd11222 195
#define dd11223 198
#define dd11233 201
#define dd11333 204
#define dd12222 207
#define dd12223 210
#define dd12233 213
#define dd12333 216
#define dd13333 219
#define dd22222 222
#define dd22223 225
#define dd22233 228
#define dd22333 231
#define dd23333 234
#define dd33333 237
#define Ndd 240

#define ee0 0
#define ee1 3
#define ee2 6
#define ee3 9
#define ee4 12
#define ee00 15
#define ee11 18
#define ee12 21
#define ee13 24
#define ee14 27
#define ee22 30
#define ee23 33
#define ee24 36
#define ee33 39
#define ee34 42
#define ee44 45
#define ee001 48
#define ee002 51
#define ee003 54
#define ee004 57
#define ee111 60
#define ee112 63
#define ee113 66
#define ee114 69
#define ee122 72
#define ee123 75
#define ee124 78
#define ee133 81
#define ee134 84
#define ee144 87
#define ee222 90
#define ee223 93
#define ee224 96
#define ee233 99
#define ee234 102
#define ee244 105
#define ee333 108
#define ee334 111
#define ee344 114
#define ee444 117
#define ee0000 120
#define ee0011 123
#define ee0012 126
#define ee0013 129
#define ee0014 132
#define ee0022 135
#define ee0023 138
#define ee0024 141
#define ee0033 144
#define ee0034 147
#define ee0044 150
#define ee1111 153
#define ee1112 156
#define ee1113 159
#define ee1114 162
#define ee1122 165
#define ee1123 168
#define ee1124 171
#define ee1133 174
#define ee1134 177
#define ee1144 180
#define ee1222 183
#define ee1223 186
#define ee1224 189
#define ee1233 192
#define ee1234 195
#define ee1244 198
#define ee1333 201
#define ee1334 204
#define ee1344 207
#define ee1444 210
#define ee2222 213
#define ee2223 216
#define ee2224 219
#define ee2233 222
#define ee2234 225
#define ee2244 228
#define ee2333 231
#define ee2334 234
#define ee2344 237
#define ee2444 240
#define ee3333 243
#define ee3334 246
#define ee3344 249
#define ee3444 252
#define ee4444 255
#define Nee 258


#include <complex>

void Aput(std::complex<double> *, const std::complex<double> &);
void Bput(const std::complex<double> *, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &);
void Cput(std::complex<double> *, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &);
void Dput(std::complex<double> *, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &, const std::complex<double> &,
          const std::complex<double> &);

std::complex<double> A0i(const int &, const std::complex<double> &);
std::complex<double> B0i(const int &, const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &);
std::complex<double> C0i(const int &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &);

std::complex<double> D0i(const int &, const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &,
                         const std::complex<double> &, const std::complex<double> &);

void init_collier(int Nmax, int ncache);
void setparam_collier(double uvdiv, double delta_uv, double mu2, double lambda);

#endif
