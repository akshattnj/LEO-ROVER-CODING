// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from leo_msgs:srv/SetImuCalibration.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "leo_msgs/srv/detail/set_imu_calibration__struct.h"
#include "leo_msgs/srv/detail/set_imu_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool leo_msgs__srv__set_imu_calibration__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("leo_msgs.srv._set_imu_calibration.SetImuCalibration_Request", full_classname_dest, 59) == 0);
  }
  leo_msgs__srv__SetImuCalibration_Request * ros_message = _ros_message;
  {  // gyro_bias_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_bias_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_bias_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_bias_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_bias_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_bias_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_bias_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leo_msgs__srv__set_imu_calibration__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetImuCalibration_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leo_msgs.srv._set_imu_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetImuCalibration_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leo_msgs__srv__SetImuCalibration_Request * ros_message = (leo_msgs__srv__SetImuCalibration_Request *)raw_ros_message;
  {  // gyro_bias_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_bias_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_bias_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_bias_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_bias_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_bias_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_bias_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "leo_msgs/srv/detail/set_imu_calibration__struct.h"
// already included above
// #include "leo_msgs/srv/detail/set_imu_calibration__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool leo_msgs__srv__set_imu_calibration__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("leo_msgs.srv._set_imu_calibration.SetImuCalibration_Response", full_classname_dest, 60) == 0);
  }
  leo_msgs__srv__SetImuCalibration_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leo_msgs__srv__set_imu_calibration__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetImuCalibration_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leo_msgs.srv._set_imu_calibration");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetImuCalibration_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leo_msgs__srv__SetImuCalibration_Response * ros_message = (leo_msgs__srv__SetImuCalibration_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
