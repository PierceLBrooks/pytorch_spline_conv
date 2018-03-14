void    spline_linear_basis_forward_cuda_Float (      THCudaTensor *basis, THCudaLongTensor *weight_index,       THCudaTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);
void    spline_linear_basis_forward_cuda_Double(THCudaDoubleTensor *basis, THCudaLongTensor *weight_index, THCudaDoubleTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);
void spline_quadratic_basis_forward_cuda_Float (      THCudaTensor *basis, THCudaLongTensor *weight_index,       THCudaTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);
void spline_quadratic_basis_forward_cuda_Double(THCudaDoubleTensor *basis, THCudaLongTensor *weight_index, THCudaDoubleTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);
void     spline_cubic_basis_forward_cuda_Float (      THCudaTensor *basis, THCudaLongTensor *weight_index,       THCudaTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);
void     spline_cubic_basis_forward_cuda_Double(THCudaDoubleTensor *basis, THCudaLongTensor *weight_index, THCudaDoubleTensor *pseudo, THCudaLongTensor *kernel_size, THCudaByteTensor *is_open_spline, int K);

void spline_weighting_forward_cuda_Float (      THCudaTensor *output,       THCudaTensor *input,       THCudaTensor *weight,       THCudaTensor *basis, THCudaLongTensor *weight_index);
void spline_weighting_forward_cuda_Double(THCudaDoubleTensor *output, THCudaDoubleTensor *input, THCudaDoubleTensor *weight, THCudaDoubleTensor *basis, THCudaLongTensor *weight_index);
