// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FilterParams in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__FilterParams_Request
{
  /// minimum value along the x axis beyond which all points will be cropped when doing Crop Box Filtering
  float x_filter_min;
  /// maximum value along the x axis beyond which all points will be cropped when doing Crop Box Filtering
  float x_filter_max;
  /// minimum value along the y axis beyond which all points will be cropped when doing Crop Box Filtering
  float y_filter_min;
  /// maximum value along the y axis beyond which all points will be cropped when doing Crop Box Filtering
  float y_filter_max;
  /// minimum value along the z axis beyond which all points will be cropped when doing Crop Box Filtering
  float z_filter_min;
  /// maximum value along the z axis beyond which all points will be cropped when doing Crop Box Filtering
  float z_filter_max;
  /// voxel leaf size for the x, y, and z axes when doing Voxel Filtering
  float voxel_leaf_size;
  /// maximum number of iterations the algorithm should go when when doing Planar Segmentation
  int32_t plane_max_iter;
  /// distance perpendicular from the planar model outside of which points should not be segmented out when doing Planar Segmentation
  float plane_dist_thresh;
  /// desired search radius when doing Radius Outlier Removal
  float ror_radius_search;
  /// minimum number of neighbors a point should have to not be cropped out when doing Radius Outlier Removal
  int32_t ror_min_neighbors;
  /// any point within this distance will be considered part of the same cluster
  float cluster_tol;
  /// minimum number of points a cluster must have to be considered a cluster
  int32_t cluster_min_size;
  /// maximum number of points a cluster can have to be considered a cluster
  int32_t cluster_max_size;
} interbotix_perception_msgs__srv__FilterParams_Request;

// Struct for a sequence of interbotix_perception_msgs__srv__FilterParams_Request.
typedef struct interbotix_perception_msgs__srv__FilterParams_Request__Sequence
{
  interbotix_perception_msgs__srv__FilterParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__FilterParams_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FilterParams in the package interbotix_perception_msgs.
typedef struct interbotix_perception_msgs__srv__FilterParams_Response
{
  uint8_t structure_needs_at_least_one_member;
} interbotix_perception_msgs__srv__FilterParams_Response;

// Struct for a sequence of interbotix_perception_msgs__srv__FilterParams_Response.
typedef struct interbotix_perception_msgs__srv__FilterParams_Response__Sequence
{
  interbotix_perception_msgs__srv__FilterParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interbotix_perception_msgs__srv__FilterParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__STRUCT_H_
