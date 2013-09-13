#include "is_sparse.h"
template <typename T>
IGL_INLINE bool igl::is_sparse(
  const Eigen::SparseMatrix<T> & A)
{
  return true;
}
template <typename DerivedA>
IGL_INLINE bool igl::is_sparse(
  const Eigen::PlainObjectBase<DerivedA>& A)
{
  return false;
}

#ifndef IGL_HEADER_ONLY
// Explicit template specialization
// generated by autoexplicit.sh
template bool igl::is_sparse<double>(Eigen::SparseMatrix<double, 0, int> const&);
// generated by autoexplicit.sh
template bool igl::is_sparse<Eigen::Matrix<double, -1, -1, 0, -1, -1> >(Eigen::PlainObjectBase<Eigen::Matrix<double, -1, -1, 0, -1, -1> > const&);
#endif