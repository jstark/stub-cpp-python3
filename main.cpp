#include "Python.h"
#include <cstdio>

int main(int argc, char **argv)
{
    Py_Initialize();

    const char *filename = argv[1];
    FILE *fp = fopen(filename, "r");

    PyObject *m = PyImport_AddModule("__main__");
    Py_INCREF(m);
    PyObject *d = PyModule_GetDict(m);

    //PyObject *globals = PyDict_New();
    //PyObject *locals = PyDict_New();
    //PyRun_FileEx(fp, filename, Py_file_input, globals, locals, 1);
    PyRun_FileEx(fp, filename, Py_file_input, d, d, 1);

    Py_Finalize();
    return 0;
}

