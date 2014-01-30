#ifndef JPY_DIAG_H
#define JPY_DIAG_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct JPy_Diag
{
    PyObject_HEAD
    int flags;
    int F_OFF;
    int F_TYPE;
    int F_METH;
    int F_EXEC;
    int F_MEM;
    int F_JVM;
    int F_ALL;
}
JPy_Diag;


#define JPy_DIAG_F_OFF    0x00
#define JPy_DIAG_F_TYPE   0x01
#define JPy_DIAG_F_METH   0x02
#define JPy_DIAG_F_EXEC   0x04
#define JPy_DIAG_F_MEM    0x08
#define JPy_DIAG_F_JVM    0x10
#define JPy_DIAG_F_ALL    0xff

extern PyTypeObject Diag_Type;
extern int JPy_DiagFlags;

PyObject* Diag_New(void);

void JPy_DiagPrint(int diagFlags, const char * format, ...);

#define JPy_DIAG_PRINT if (JPy_DiagFlags != 0) JPy_DiagPrint


#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif /* !JPY_DIAG_H */