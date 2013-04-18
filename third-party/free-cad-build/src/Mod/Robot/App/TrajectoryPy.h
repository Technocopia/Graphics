
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef ROBOT_TRAJECTORYPY_H
#define ROBOT_TRAJECTORYPY_H

#include <Base/PersistencePy.h>
#include <Mod/Robot/App/Trajectory.h>
#include <string>

namespace Robot
{

//===========================================================================
// TrajectoryPy - Python wrapper
//===========================================================================

/** The python export class for Trajectory
 */
class RobotExport TrajectoryPy : public Base::PersistencePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    static PyParentObject Parents[];
    virtual PyTypeObject *GetType(void) {return &Type;};
    virtual PyParentObject *GetParents(void) {return Parents;}

public:
    TrajectoryPy(Trajectory *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~TrajectoryPy();

    typedef Trajectory* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the insertWaypoints() method
    static PyObject * staticCallback_insertWaypoints (PyObject *self, PyObject *args);
    /// implementer for the insertWaypoints() method
    PyObject*  insertWaypoints(PyObject *args);
    /// callback for the position() method
    static PyObject * staticCallback_position (PyObject *self, PyObject *args);
    /// implementer for the position() method
    PyObject*  position(PyObject *args);
    /// callback for the velocity() method
    static PyObject * staticCallback_velocity (PyObject *self, PyObject *args);
    /// implementer for the velocity() method
    PyObject*  velocity(PyObject *args);
    /// callback for the deleteLast() method
    static PyObject * staticCallback_deleteLast (PyObject *self, PyObject *args);
    /// implementer for the deleteLast() method
    PyObject*  deleteLast(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Duration attribute
    static PyObject * staticCallback_getDuration (PyObject *self, void *closure);
    /// getter for the Duration attribute
    Py::Float getDuration(void) const;
    /// setter callback for the Duration attribute
    static int staticCallback_setDuration (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Duration is read only!
    ///getter callback for the Length attribute
    static PyObject * staticCallback_getLength (PyObject *self, void *closure);
    /// getter for the Length attribute
    Py::Float getLength(void) const;
    /// setter callback for the Length attribute
    static int staticCallback_setLength (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Length is read only!
    ///getter callback for the Waypoints attribute
    static PyObject * staticCallback_getWaypoints (PyObject *self, void *closure);
    /// getter for the Waypoints attribute
    Py::List getWaypoints(void) const;
    /// setter callback for the Waypoints attribute
    static int staticCallback_setWaypoints (PyObject *self, PyObject *value, void *closure);
    /// setter for the Waypoints attribute
    void setWaypoints(Py::List arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Trajectory *getTrajectoryPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

		  bool touched;
	  
    //@}
};

#define PARENTSRobotTrajectoryPy &TrajectoryPy::Type,PARENTSBasePersistencePy

}  //namespace Robot

#endif  // ROBOT_TRAJECTORYPY_H

