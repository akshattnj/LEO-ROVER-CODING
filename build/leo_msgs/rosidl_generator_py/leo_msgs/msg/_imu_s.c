// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from leo_msgs:msg/Imu.idl
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
#include "leo_msgs/msg/detail/imu__struct.h"
#include "leo_msgs/msg/detail/imu__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool leo_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[22];
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
    assert(strncmp("leo_msgs.msg._imu.Imu", full_classname_dest, 21) == 0);
  }
  leo_msgs__msg__Imu * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // accel_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "accel_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->accel_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leo_msgs__msg__imu__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Imu */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leo_msgs.msg._imu");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Imu");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leo_msgs__msg__Imu * ros_message = (leo_msgs__msg__Imu *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accel_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->accel_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accel_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
