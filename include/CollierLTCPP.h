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
