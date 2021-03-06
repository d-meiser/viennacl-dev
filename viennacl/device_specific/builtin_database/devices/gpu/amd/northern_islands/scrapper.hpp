#ifndef VIENNACL_DEVICE_SPECIFIC_BUILTIN_DATABASE_DEVICES_GPU_AMD_NORTHERN_ISLANDS_SCRAPPER_HPP_
#define VIENNACL_DEVICE_SPECIFIC_BUILTIN_DATABASE_DEVICES_GPU_AMD_NORTHERN_ISLANDS_SCRAPPER_HPP_

#include "viennacl/device_specific/templates/matrix_product_template.hpp"

#include "viennacl/device_specific/templates/row_wise_reduction_template.hpp"

#include "viennacl/device_specific/templates/matrix_axpy_template.hpp"

#include "viennacl/device_specific/templates/reduction_template.hpp"

#include "viennacl/device_specific/templates/vector_axpy_template.hpp"

#include "viennacl/device_specific/forwards.h"
#include "viennacl/device_specific/builtin_database/common.hpp"

namespace viennacl{
namespace device_specific{
namespace builtin_database{
namespace devices{
namespace gpu{
namespace amd{
namespace northern_islands{
namespace scrapper{

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'T'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", matrix_product_template::parameters_type(1,8,16,32,2,1,2,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,16,16));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'T'>, char_to_type<'N'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", matrix_product_template::parameters_type(1,8,16,8,2,2,1,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,8));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'T'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", matrix_product_template::parameters_type(2,32,2,4,2,1,2,FETCH_FROM_GLOBAL_STRIDED,FETCH_FROM_GLOBAL_STRIDED,0,0));
}

inline void add_4B(database_type<matrix_product_template::parameters_type> & db, char_to_type<'N'>, char_to_type<'N'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", matrix_product_template::parameters_type(1,16,16,8,2,1,2,FETCH_FROM_LOCAL,FETCH_FROM_LOCAL,8,16));
}

inline void add_4B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'T'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", row_wise_reduction_template::parameters_type(4,8,8,256,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<row_wise_reduction_template::parameters_type> & db, char_to_type<'N'>)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", row_wise_reduction_template::parameters_type(4,128,1,32,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<matrix_axpy_template::parameters_type> & db)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", matrix_axpy_template::parameters_type(1,128,1,64,4,FETCH_FROM_GLOBAL_CONTIGUOUS));
}

inline void add_4B(database_type<reduction_template::parameters_type> & db)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", reduction_template::parameters_type(2,64,1024,FETCH_FROM_GLOBAL_STRIDED));
}

inline void add_4B(database_type<vector_axpy_template::parameters_type> & db)
{
  db.add_4B(amd_id, CL_DEVICE_TYPE_GPU, ocl::northern_islands, "Scrapper", vector_axpy_template::parameters_type(1,256,1,FETCH_FROM_GLOBAL_STRIDED));
}

}
}
}
}
}
}
}
}
#endif
