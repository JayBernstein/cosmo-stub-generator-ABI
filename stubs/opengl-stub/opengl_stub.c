#include "opengl_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <libc/dlopen/dlfcn.h>
#define MS_ABI_ATTR __attribute__((__ms_abi__))

static struct openglFuncs {
    void (*ptr_glClearIndex)(GLfloat c);
    void (*ptr_glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
    void (*ptr_glClear)(GLbitfield mask);
    void (*ptr_glIndexMask)(GLuint mask);
    void (*ptr_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    void (*ptr_glAlphaFunc)(GLenum func, GLclampf ref);
    void (*ptr_glBlendFunc)(GLenum sfactor, GLenum dfactor);
    void (*ptr_glLogicOp)(GLenum opcode);
    void (*ptr_glCullFace)(GLenum mode);
    void (*ptr_glFrontFace)(GLenum mode);
    void (*ptr_glPointSize)(GLfloat size);
    void (*ptr_glLineWidth)(GLfloat width);
    void (*ptr_glLineStipple)(GLint factor, GLushort pattern);
    void (*ptr_glPolygonMode)(GLenum face, GLenum mode);
    void (*ptr_glPolygonOffset)(GLfloat factor, GLfloat units);
    void (*ptr_glPolygonStipple)(const GLubyte * mask);
    void (*ptr_glGetPolygonStipple)(GLubyte * mask);
    void (*ptr_glEdgeFlag)(GLboolean flag);
    void (*ptr_glEdgeFlagv)(const GLboolean * flag);
    void (*ptr_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
    void (*ptr_glClipPlane)(GLenum plane, const GLdouble * equation);
    void (*ptr_glGetClipPlane)(GLenum plane, GLdouble * equation);
    void (*ptr_glDrawBuffer)(GLenum mode);
    void (*ptr_glReadBuffer)(GLenum mode);
    void (*ptr_glEnable)(GLenum cap);
    void (*ptr_glDisable)(GLenum cap);
    GLboolean (*ptr_glIsEnabled)(GLenum cap);
    void (*ptr_glEnableClientState)(GLenum cap);
    void (*ptr_glDisableClientState)(GLenum cap);
    void (*ptr_glGetBooleanv)(GLenum pname, GLboolean * params);
    void (*ptr_glGetDoublev)(GLenum pname, GLdouble * params);
    void (*ptr_glGetFloatv)(GLenum pname, GLfloat * params);
    void (*ptr_glGetIntegerv)(GLenum pname, GLint * params);
    void (*ptr_glPushAttrib)(GLbitfield mask);
    void (*ptr_glPopAttrib)(void);
    void (*ptr_glPushClientAttrib)(GLbitfield mask);
    void (*ptr_glPopClientAttrib)(void);
    GLint (*ptr_glRenderMode)(GLenum mode);
    GLenum (*ptr_glGetError)(void);
    const GLubyte * (*ptr_glGetString)(GLenum name);
    void (*ptr_glFinish)(void);
    void (*ptr_glFlush)(void);
    void (*ptr_glHint)(GLenum target, GLenum mode);
    void (*ptr_glClearDepth)(GLclampd depth);
    void (*ptr_glDepthFunc)(GLenum func);
    void (*ptr_glDepthMask)(GLboolean flag);
    void (*ptr_glDepthRange)(GLclampd near_val, GLclampd far_val);
    void (*ptr_glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void (*ptr_glAccum)(GLenum op, GLfloat value);
    void (*ptr_glMatrixMode)(GLenum mode);
    void (*ptr_glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
    void (*ptr_glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
    void (*ptr_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
    void (*ptr_glPushMatrix)(void);
    void (*ptr_glPopMatrix)(void);
    void (*ptr_glLoadIdentity)(void);
    void (*ptr_glLoadMatrixd)(const GLdouble * m);
    void (*ptr_glLoadMatrixf)(const GLfloat * m);
    void (*ptr_glMultMatrixd)(const GLdouble * m);
    void (*ptr_glMultMatrixf)(const GLfloat * m);
    void (*ptr_glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
    void (*ptr_glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
    void (*ptr_glScaled)(GLdouble x, GLdouble y, GLdouble z);
    void (*ptr_glScalef)(GLfloat x, GLfloat y, GLfloat z);
    void (*ptr_glTranslated)(GLdouble x, GLdouble y, GLdouble z);
    void (*ptr_glTranslatef)(GLfloat x, GLfloat y, GLfloat z);
    GLboolean (*ptr_glIsList)(GLuint list);
    void (*ptr_glDeleteLists)(GLuint list, GLsizei range);
    GLuint (*ptr_glGenLists)(GLsizei range);
    void (*ptr_glNewList)(GLuint list, GLenum mode);
    void (*ptr_glEndList)(void);
    void (*ptr_glCallList)(GLuint list);
    void (*ptr_glCallLists)(GLsizei n, GLenum type, const GLvoid * lists);
    void (*ptr_glListBase)(GLuint base);
    void (*ptr_glBegin)(GLenum mode);
    void (*ptr_glEnd)(void);
    void (*ptr_glVertex2d)(GLdouble x, GLdouble y);
    void (*ptr_glVertex2f)(GLfloat x, GLfloat y);
    void (*ptr_glVertex2i)(GLint x, GLint y);
    void (*ptr_glVertex2s)(GLshort x, GLshort y);
    void (*ptr_glVertex3d)(GLdouble x, GLdouble y, GLdouble z);
    void (*ptr_glVertex3f)(GLfloat x, GLfloat y, GLfloat z);
    void (*ptr_glVertex3i)(GLint x, GLint y, GLint z);
    void (*ptr_glVertex3s)(GLshort x, GLshort y, GLshort z);
    void (*ptr_glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void (*ptr_glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void (*ptr_glVertex4i)(GLint x, GLint y, GLint z, GLint w);
    void (*ptr_glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w);
    void (*ptr_glVertex2dv)(const GLdouble * v);
    void (*ptr_glVertex2fv)(const GLfloat * v);
    void (*ptr_glVertex2iv)(const GLint * v);
    void (*ptr_glVertex2sv)(const GLshort * v);
    void (*ptr_glVertex3dv)(const GLdouble * v);
    void (*ptr_glVertex3fv)(const GLfloat * v);
    void (*ptr_glVertex3iv)(const GLint * v);
    void (*ptr_glVertex3sv)(const GLshort * v);
    void (*ptr_glVertex4dv)(const GLdouble * v);
    void (*ptr_glVertex4fv)(const GLfloat * v);
    void (*ptr_glVertex4iv)(const GLint * v);
    void (*ptr_glVertex4sv)(const GLshort * v);
    void (*ptr_glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz);
    void (*ptr_glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz);
    void (*ptr_glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);
    void (*ptr_glNormal3i)(GLint nx, GLint ny, GLint nz);
    void (*ptr_glNormal3s)(GLshort nx, GLshort ny, GLshort nz);
    void (*ptr_glNormal3bv)(const GLbyte * v);
    void (*ptr_glNormal3dv)(const GLdouble * v);
    void (*ptr_glNormal3fv)(const GLfloat * v);
    void (*ptr_glNormal3iv)(const GLint * v);
    void (*ptr_glNormal3sv)(const GLshort * v);
    void (*ptr_glIndexd)(GLdouble c);
    void (*ptr_glIndexf)(GLfloat c);
    void (*ptr_glIndexi)(GLint c);
    void (*ptr_glIndexs)(GLshort c);
    void (*ptr_glIndexub)(GLubyte c);
    void (*ptr_glIndexdv)(const GLdouble * c);
    void (*ptr_glIndexfv)(const GLfloat * c);
    void (*ptr_glIndexiv)(const GLint * c);
    void (*ptr_glIndexsv)(const GLshort * c);
    void (*ptr_glIndexubv)(const GLubyte * c);
    void (*ptr_glColor3b)(GLbyte red, GLbyte green, GLbyte blue);
    void (*ptr_glColor3d)(GLdouble red, GLdouble green, GLdouble blue);
    void (*ptr_glColor3f)(GLfloat red, GLfloat green, GLfloat blue);
    void (*ptr_glColor3i)(GLint red, GLint green, GLint blue);
    void (*ptr_glColor3s)(GLshort red, GLshort green, GLshort blue);
    void (*ptr_glColor3ub)(GLubyte red, GLubyte green, GLubyte blue);
    void (*ptr_glColor3ui)(GLuint red, GLuint green, GLuint blue);
    void (*ptr_glColor3us)(GLushort red, GLushort green, GLushort blue);
    void (*ptr_glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
    void (*ptr_glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
    void (*ptr_glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void (*ptr_glColor4i)(GLint red, GLint green, GLint blue, GLint alpha);
    void (*ptr_glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
    void (*ptr_glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
    void (*ptr_glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
    void (*ptr_glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
    void (*ptr_glColor3bv)(const GLbyte * v);
    void (*ptr_glColor3dv)(const GLdouble * v);
    void (*ptr_glColor3fv)(const GLfloat * v);
    void (*ptr_glColor3iv)(const GLint * v);
    void (*ptr_glColor3sv)(const GLshort * v);
    void (*ptr_glColor3ubv)(const GLubyte * v);
    void (*ptr_glColor3uiv)(const GLuint * v);
    void (*ptr_glColor3usv)(const GLushort * v);
    void (*ptr_glColor4bv)(const GLbyte * v);
    void (*ptr_glColor4dv)(const GLdouble * v);
    void (*ptr_glColor4fv)(const GLfloat * v);
    void (*ptr_glColor4iv)(const GLint * v);
    void (*ptr_glColor4sv)(const GLshort * v);
    void (*ptr_glColor4ubv)(const GLubyte * v);
    void (*ptr_glColor4uiv)(const GLuint * v);
    void (*ptr_glColor4usv)(const GLushort * v);
    void (*ptr_glTexCoord1d)(GLdouble s);
    void (*ptr_glTexCoord1f)(GLfloat s);
    void (*ptr_glTexCoord1i)(GLint s);
    void (*ptr_glTexCoord1s)(GLshort s);
    void (*ptr_glTexCoord2d)(GLdouble s, GLdouble t);
    void (*ptr_glTexCoord2f)(GLfloat s, GLfloat t);
    void (*ptr_glTexCoord2i)(GLint s, GLint t);
    void (*ptr_glTexCoord2s)(GLshort s, GLshort t);
    void (*ptr_glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r);
    void (*ptr_glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r);
    void (*ptr_glTexCoord3i)(GLint s, GLint t, GLint r);
    void (*ptr_glTexCoord3s)(GLshort s, GLshort t, GLshort r);
    void (*ptr_glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (*ptr_glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (*ptr_glTexCoord4i)(GLint s, GLint t, GLint r, GLint q);
    void (*ptr_glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q);
    void (*ptr_glTexCoord1dv)(const GLdouble * v);
    void (*ptr_glTexCoord1fv)(const GLfloat * v);
    void (*ptr_glTexCoord1iv)(const GLint * v);
    void (*ptr_glTexCoord1sv)(const GLshort * v);
    void (*ptr_glTexCoord2dv)(const GLdouble * v);
    void (*ptr_glTexCoord2fv)(const GLfloat * v);
    void (*ptr_glTexCoord2iv)(const GLint * v);
    void (*ptr_glTexCoord2sv)(const GLshort * v);
    void (*ptr_glTexCoord3dv)(const GLdouble * v);
    void (*ptr_glTexCoord3fv)(const GLfloat * v);
    void (*ptr_glTexCoord3iv)(const GLint * v);
    void (*ptr_glTexCoord3sv)(const GLshort * v);
    void (*ptr_glTexCoord4dv)(const GLdouble * v);
    void (*ptr_glTexCoord4fv)(const GLfloat * v);
    void (*ptr_glTexCoord4iv)(const GLint * v);
    void (*ptr_glTexCoord4sv)(const GLshort * v);
    void (*ptr_glRasterPos2d)(GLdouble x, GLdouble y);
    void (*ptr_glRasterPos2f)(GLfloat x, GLfloat y);
    void (*ptr_glRasterPos2i)(GLint x, GLint y);
    void (*ptr_glRasterPos2s)(GLshort x, GLshort y);
    void (*ptr_glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z);
    void (*ptr_glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z);
    void (*ptr_glRasterPos3i)(GLint x, GLint y, GLint z);
    void (*ptr_glRasterPos3s)(GLshort x, GLshort y, GLshort z);
    void (*ptr_glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void (*ptr_glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void (*ptr_glRasterPos4i)(GLint x, GLint y, GLint z, GLint w);
    void (*ptr_glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w);
    void (*ptr_glRasterPos2dv)(const GLdouble * v);
    void (*ptr_glRasterPos2fv)(const GLfloat * v);
    void (*ptr_glRasterPos2iv)(const GLint * v);
    void (*ptr_glRasterPos2sv)(const GLshort * v);
    void (*ptr_glRasterPos3dv)(const GLdouble * v);
    void (*ptr_glRasterPos3fv)(const GLfloat * v);
    void (*ptr_glRasterPos3iv)(const GLint * v);
    void (*ptr_glRasterPos3sv)(const GLshort * v);
    void (*ptr_glRasterPos4dv)(const GLdouble * v);
    void (*ptr_glRasterPos4fv)(const GLfloat * v);
    void (*ptr_glRasterPos4iv)(const GLint * v);
    void (*ptr_glRasterPos4sv)(const GLshort * v);
    void (*ptr_glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
    void (*ptr_glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
    void (*ptr_glRecti)(GLint x1, GLint y1, GLint x2, GLint y2);
    void (*ptr_glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
    void (*ptr_glRectdv)(const GLdouble * v1, const GLdouble * v2);
    void (*ptr_glRectfv)(const GLfloat * v1, const GLfloat * v2);
    void (*ptr_glRectiv)(const GLint * v1, const GLint * v2);
    void (*ptr_glRectsv)(const GLshort * v1, const GLshort * v2);
    void (*ptr_glVertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (*ptr_glNormalPointer)(GLenum type, GLsizei stride, const GLvoid * ptr);
    void (*ptr_glColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (*ptr_glIndexPointer)(GLenum type, GLsizei stride, const GLvoid * ptr);
    void (*ptr_glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (*ptr_glEdgeFlagPointer)(GLsizei stride, const GLvoid * ptr);
    void (*ptr_glGetPointerv)(GLenum pname, GLvoid * * params);
    void (*ptr_glArrayElement)(GLint i);
    void (*ptr_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
    void (*ptr_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
    void (*ptr_glInterleavedArrays)(GLenum format, GLsizei stride, const GLvoid * pointer);
    void (*ptr_glShadeModel)(GLenum mode);
    void (*ptr_glLightf)(GLenum light, GLenum pname, GLfloat param);
    void (*ptr_glLighti)(GLenum light, GLenum pname, GLint param);
    void (*ptr_glLightfv)(GLenum light, GLenum pname, const GLfloat * params);
    void (*ptr_glLightiv)(GLenum light, GLenum pname, const GLint * params);
    void (*ptr_glGetLightfv)(GLenum light, GLenum pname, GLfloat * params);
    void (*ptr_glGetLightiv)(GLenum light, GLenum pname, GLint * params);
    void (*ptr_glLightModelf)(GLenum pname, GLfloat param);
    void (*ptr_glLightModeli)(GLenum pname, GLint param);
    void (*ptr_glLightModelfv)(GLenum pname, const GLfloat * params);
    void (*ptr_glLightModeliv)(GLenum pname, const GLint * params);
    void (*ptr_glMaterialf)(GLenum face, GLenum pname, GLfloat param);
    void (*ptr_glMateriali)(GLenum face, GLenum pname, GLint param);
    void (*ptr_glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params);
    void (*ptr_glMaterialiv)(GLenum face, GLenum pname, const GLint * params);
    void (*ptr_glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params);
    void (*ptr_glGetMaterialiv)(GLenum face, GLenum pname, GLint * params);
    void (*ptr_glColorMaterial)(GLenum face, GLenum mode);
    void (*ptr_glPixelZoom)(GLfloat xfactor, GLfloat yfactor);
    void (*ptr_glPixelStoref)(GLenum pname, GLfloat param);
    void (*ptr_glPixelStorei)(GLenum pname, GLint param);
    void (*ptr_glPixelTransferf)(GLenum pname, GLfloat param);
    void (*ptr_glPixelTransferi)(GLenum pname, GLint param);
    void (*ptr_glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values);
    void (*ptr_glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values);
    void (*ptr_glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values);
    void (*ptr_glGetPixelMapfv)(GLenum map, GLfloat * values);
    void (*ptr_glGetPixelMapuiv)(GLenum map, GLuint * values);
    void (*ptr_glGetPixelMapusv)(GLenum map, GLushort * values);
    void (*ptr_glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
    void (*ptr_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
    void (*ptr_glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
    void (*ptr_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
    void (*ptr_glStencilMask)(GLuint mask);
    void (*ptr_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
    void (*ptr_glClearStencil)(GLint s);
    void (*ptr_glTexGend)(GLenum coord, GLenum pname, GLdouble param);
    void (*ptr_glTexGenf)(GLenum coord, GLenum pname, GLfloat param);
    void (*ptr_glTexGeni)(GLenum coord, GLenum pname, GLint param);
    void (*ptr_glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params);
    void (*ptr_glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params);
    void (*ptr_glTexGeniv)(GLenum coord, GLenum pname, const GLint * params);
    void (*ptr_glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params);
    void (*ptr_glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params);
    void (*ptr_glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params);
    void (*ptr_glTexEnvf)(GLenum target, GLenum pname, GLfloat param);
    void (*ptr_glTexEnvi)(GLenum target, GLenum pname, GLint param);
    void (*ptr_glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (*ptr_glTexEnviv)(GLenum target, GLenum pname, const GLint * params);
    void (*ptr_glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetTexEnviv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
    void (*ptr_glTexParameteri)(GLenum target, GLenum pname, GLint param);
    void (*ptr_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (*ptr_glTexParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (*ptr_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params);
    void (*ptr_glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params);
    void (*ptr_glTexImage1D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glTexImage2D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels);
    void (*ptr_glGenTextures)(GLsizei n, GLuint * textures);
    void (*ptr_glDeleteTextures)(GLsizei n, const GLuint * textures);
    void (*ptr_glBindTexture)(GLenum target, GLuint texture);
    void (*ptr_glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLclampf * priorities);
    GLboolean (*ptr_glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences);
    GLboolean (*ptr_glIsTexture)(GLuint texture);
    void (*ptr_glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    void (*ptr_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    void (*ptr_glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    void (*ptr_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void (*ptr_glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
    void (*ptr_glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
    void (*ptr_glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
    void (*ptr_glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
    void (*ptr_glGetMapdv)(GLenum target, GLenum query, GLdouble * v);
    void (*ptr_glGetMapfv)(GLenum target, GLenum query, GLfloat * v);
    void (*ptr_glGetMapiv)(GLenum target, GLenum query, GLint * v);
    void (*ptr_glEvalCoord1d)(GLdouble u);
    void (*ptr_glEvalCoord1f)(GLfloat u);
    void (*ptr_glEvalCoord1dv)(const GLdouble * u);
    void (*ptr_glEvalCoord1fv)(const GLfloat * u);
    void (*ptr_glEvalCoord2d)(GLdouble u, GLdouble v);
    void (*ptr_glEvalCoord2f)(GLfloat u, GLfloat v);
    void (*ptr_glEvalCoord2dv)(const GLdouble * u);
    void (*ptr_glEvalCoord2fv)(const GLfloat * u);
    void (*ptr_glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2);
    void (*ptr_glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2);
    void (*ptr_glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
    void (*ptr_glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
    void (*ptr_glEvalPoint1)(GLint i);
    void (*ptr_glEvalPoint2)(GLint i, GLint j);
    void (*ptr_glEvalMesh1)(GLenum mode, GLint i1, GLint i2);
    void (*ptr_glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
    void (*ptr_glFogf)(GLenum pname, GLfloat param);
    void (*ptr_glFogi)(GLenum pname, GLint param);
    void (*ptr_glFogfv)(GLenum pname, const GLfloat * params);
    void (*ptr_glFogiv)(GLenum pname, const GLint * params);
    void (*ptr_glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer);
    void (*ptr_glPassThrough)(GLfloat token);
    void (*ptr_glSelectBuffer)(GLsizei size, GLuint * buffer);
    void (*ptr_glInitNames)(void);
    void (*ptr_glLoadName)(GLuint name);
    void (*ptr_glPushName)(GLuint name);
    void (*ptr_glPopName)(void);
    void (*ptr_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices);
    void (*ptr_glTexImage3D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels);
    void (*ptr_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void (*ptr_glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table);
    void (*ptr_glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data);
    void (*ptr_glColorTableParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (*ptr_glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (*ptr_glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
    void (*ptr_glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void (*ptr_glGetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid * table);
    void (*ptr_glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glBlendEquation)(GLenum mode);
    void (*ptr_glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
    void (*ptr_glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
    void (*ptr_glResetHistogram)(GLenum target);
    void (*ptr_glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values);
    void (*ptr_glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glMinmax)(GLenum target, GLenum internalformat, GLboolean sink);
    void (*ptr_glResetMinmax)(GLenum target);
    void (*ptr_glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values);
    void (*ptr_glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image);
    void (*ptr_glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image);
    void (*ptr_glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params);
    void (*ptr_glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (*ptr_glConvolutionParameteri)(GLenum target, GLenum pname, GLint params);
    void (*ptr_glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (*ptr_glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void (*ptr_glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
    void (*ptr_glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid * image);
    void (*ptr_glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (*ptr_glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (*ptr_glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column);
    void (*ptr_glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span);
    void (*ptr_glActiveTexture)(GLenum texture);
    void (*ptr_glClientActiveTexture)(GLenum texture);
    void (*ptr_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (*ptr_glGetCompressedTexImage)(GLenum target, GLint lod, GLvoid * img);
    void (*ptr_glMultiTexCoord1d)(GLenum target, GLdouble s);
    void (*ptr_glMultiTexCoord1dv)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord1f)(GLenum target, GLfloat s);
    void (*ptr_glMultiTexCoord1fv)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord1i)(GLenum target, GLint s);
    void (*ptr_glMultiTexCoord1iv)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord1s)(GLenum target, GLshort s);
    void (*ptr_glMultiTexCoord1sv)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t);
    void (*ptr_glMultiTexCoord2dv)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t);
    void (*ptr_glMultiTexCoord2fv)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord2i)(GLenum target, GLint s, GLint t);
    void (*ptr_glMultiTexCoord2iv)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t);
    void (*ptr_glMultiTexCoord2sv)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
    void (*ptr_glMultiTexCoord3dv)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
    void (*ptr_glMultiTexCoord3fv)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r);
    void (*ptr_glMultiTexCoord3iv)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r);
    void (*ptr_glMultiTexCoord3sv)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (*ptr_glMultiTexCoord4dv)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (*ptr_glMultiTexCoord4fv)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q);
    void (*ptr_glMultiTexCoord4iv)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
    void (*ptr_glMultiTexCoord4sv)(GLenum target, const GLshort * v);
    void (*ptr_glLoadTransposeMatrixd)(const GLdouble m[16]);
    void (*ptr_glLoadTransposeMatrixf)(const GLfloat m[16]);
    void (*ptr_glMultTransposeMatrixd)(const GLdouble m[16]);
    void (*ptr_glMultTransposeMatrixf)(const GLfloat m[16]);
    void (*ptr_glSampleCoverage)(GLclampf value, GLboolean invert);
    void (*ptr_glActiveTextureARB)(GLenum texture);
    void (*ptr_glClientActiveTextureARB)(GLenum texture);
    void (*ptr_glMultiTexCoord1dARB)(GLenum target, GLdouble s);
    void (*ptr_glMultiTexCoord1dvARB)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord1fARB)(GLenum target, GLfloat s);
    void (*ptr_glMultiTexCoord1fvARB)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord1iARB)(GLenum target, GLint s);
    void (*ptr_glMultiTexCoord1ivARB)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord1sARB)(GLenum target, GLshort s);
    void (*ptr_glMultiTexCoord1svARB)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t);
    void (*ptr_glMultiTexCoord2dvARB)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t);
    void (*ptr_glMultiTexCoord2fvARB)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t);
    void (*ptr_glMultiTexCoord2ivARB)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t);
    void (*ptr_glMultiTexCoord2svARB)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
    void (*ptr_glMultiTexCoord3dvARB)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
    void (*ptr_glMultiTexCoord3fvARB)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r);
    void (*ptr_glMultiTexCoord3ivARB)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r);
    void (*ptr_glMultiTexCoord3svARB)(GLenum target, const GLshort * v);
    void (*ptr_glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (*ptr_glMultiTexCoord4dvARB)(GLenum target, const GLdouble * v);
    void (*ptr_glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (*ptr_glMultiTexCoord4fvARB)(GLenum target, const GLfloat * v);
    void (*ptr_glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q);
    void (*ptr_glMultiTexCoord4ivARB)(GLenum target, const GLint * v);
    void (*ptr_glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
    void (*ptr_glMultiTexCoord4svARB)(GLenum target, const GLshort * v);
    void (*ptr_glBlendEquationSeparateATI)(GLenum modeRGB, GLenum modeA);
    XVisualInfo * (*ptr_glXChooseVisual)(Display * dpy, int screen, int * attribList);
    GLXContext (*ptr_glXCreateContext)(Display * dpy, XVisualInfo * vis, GLXContext shareList, int direct);
    void (*ptr_glXDestroyContext)(Display * dpy, GLXContext ctx);
    int (*ptr_glXMakeCurrent)(Display * dpy, GLXDrawable drawable, GLXContext ctx);
    void (*ptr_glXCopyContext)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
    void (*ptr_glXSwapBuffers)(Display * dpy, GLXDrawable drawable);
    GLXPixmap (*ptr_glXCreateGLXPixmap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap);
    void (*ptr_glXDestroyGLXPixmap)(Display * dpy, GLXPixmap pixmap);
    int (*ptr_glXQueryExtension)(Display * dpy, int * errorb, int * event);
    int (*ptr_glXQueryVersion)(Display * dpy, int * maj, int * min);
    int (*ptr_glXIsDirect)(Display * dpy, GLXContext ctx);
    int (*ptr_glXGetConfig)(Display * dpy, XVisualInfo * visual, int attrib, int * value);
    GLXContext (*ptr_glXGetCurrentContext)(void);
    GLXDrawable (*ptr_glXGetCurrentDrawable)(void);
    void (*ptr_glXWaitGL)(void);
    void (*ptr_glXWaitX)(void);
    void (*ptr_glXUseXFont)(Font font, int first, int count, int list);
    const char * (*ptr_glXQueryExtensionsString)(Display * dpy, int screen);
    const char * (*ptr_glXQueryServerString)(Display * dpy, int screen, int name);
    const char * (*ptr_glXGetClientString)(Display * dpy, int name);
    Display * (*ptr_glXGetCurrentDisplay)(void);
    GLXFBConfig * (*ptr_glXChooseFBConfig)(Display * dpy, int screen, const int * attribList, int * nitems);
    int (*ptr_glXGetFBConfigAttrib)(Display * dpy, GLXFBConfig config, int attribute, int * value);
    GLXFBConfig * (*ptr_glXGetFBConfigs)(Display * dpy, int screen, int * nelements);
    XVisualInfo * (*ptr_glXGetVisualFromFBConfig)(Display * dpy, GLXFBConfig config);
    GLXWindow (*ptr_glXCreateWindow)(Display * dpy, GLXFBConfig config, Window win, const int * attribList);
    void (*ptr_glXDestroyWindow)(Display * dpy, GLXWindow window);
    GLXPixmap (*ptr_glXCreatePixmap)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attribList);
    void (*ptr_glXDestroyPixmap)(Display * dpy, GLXPixmap pixmap);
    GLXPbuffer (*ptr_glXCreatePbuffer)(Display * dpy, GLXFBConfig config, const int * attribList);
    void (*ptr_glXDestroyPbuffer)(Display * dpy, GLXPbuffer pbuf);
    void (*ptr_glXQueryDrawable)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
    GLXContext (*ptr_glXCreateNewContext)(Display * dpy, GLXFBConfig config, int renderType, GLXContext shareList, int direct);
    int (*ptr_glXMakeContextCurrent)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable (*ptr_glXGetCurrentReadDrawable)(void);
    int (*ptr_glXQueryContext)(Display * dpy, GLXContext ctx, int attribute, int * value);
    void (*ptr_glXSelectEvent)(Display * dpy, GLXDrawable drawable, unsigned long mask);
    void (*ptr_glXGetSelectedEvent)(Display * dpy, GLXDrawable drawable, unsigned long * mask);
    __GLXextFuncPtr (*ptr_glXGetProcAddressARB)(const GLubyte * _1);
    void (*(*ptr_glXGetProcAddress)(const GLubyte * procname))(void);
    void * (*ptr_glXAllocateMemoryNV)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
    void (*ptr_glXFreeMemoryNV)(GLvoid * pointer);
    int (*ptr_glXBindTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer);
    int (*ptr_glXReleaseTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer);
    int (*ptr_glXDrawableAttribARB)(Display * dpy, GLXDrawable draw, const int * attribList);
    int (*ptr_glXGetFrameUsageMESA)(Display * dpy, GLXDrawable drawable, float * usage);
    int (*ptr_glXBeginFrameTrackingMESA)(Display * dpy, GLXDrawable drawable);
    int (*ptr_glXEndFrameTrackingMESA)(Display * dpy, GLXDrawable drawable);
    int (*ptr_glXQueryFrameTrackingMESA)(Display * dpy, GLXDrawable drawable, int64_t * swapCount, int64_t * missedFrames, float * lastMissedUsage);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClearIndex)(GLfloat c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClear)(GLbitfield mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexMask)(GLuint mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glAlphaFunc)(GLenum func, GLclampf ref);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBlendFunc)(GLenum sfactor, GLenum dfactor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLogicOp)(GLenum opcode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCullFace)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFrontFace)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPointSize)(GLfloat size);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLineWidth)(GLfloat width);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLineStipple)(GLint factor, GLushort pattern);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPolygonMode)(GLenum face, GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPolygonOffset)(GLfloat factor, GLfloat units);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPolygonStipple)(const GLubyte * mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetPolygonStipple)(GLubyte * mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEdgeFlag)(GLboolean flag);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEdgeFlagv)(const GLboolean * flag);
    void (__attribute__((__ms_abi__)) *ptr_ms_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClipPlane)(GLenum plane, const GLdouble * equation);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetClipPlane)(GLenum plane, GLdouble * equation);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDrawBuffer)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glReadBuffer)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEnable)(GLenum cap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDisable)(GLenum cap);
    GLboolean (__attribute__((__ms_abi__)) *ptr_ms_glIsEnabled)(GLenum cap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEnableClientState)(GLenum cap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDisableClientState)(GLenum cap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetBooleanv)(GLenum pname, GLboolean * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetDoublev)(GLenum pname, GLdouble * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetFloatv)(GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetIntegerv)(GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPushAttrib)(GLbitfield mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPopAttrib)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPushClientAttrib)(GLbitfield mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPopClientAttrib)(void);
    GLint (__attribute__((__ms_abi__)) *ptr_ms_glRenderMode)(GLenum mode);
    GLenum (__attribute__((__ms_abi__)) *ptr_ms_glGetError)(void);
    const GLubyte * (__attribute__((__ms_abi__)) *ptr_ms_glGetString)(GLenum name);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFinish)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFlush)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glHint)(GLenum target, GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClearDepth)(GLclampd depth);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDepthFunc)(GLenum func);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDepthMask)(GLboolean flag);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDepthRange)(GLclampd near_val, GLclampd far_val);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glAccum)(GLenum op, GLfloat value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMatrixMode)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
    void (__attribute__((__ms_abi__)) *ptr_ms_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPushMatrix)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPopMatrix)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadIdentity)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadMatrixd)(const GLdouble * m);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadMatrixf)(const GLfloat * m);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultMatrixd)(const GLdouble * m);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultMatrixf)(const GLfloat * m);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glScaled)(GLdouble x, GLdouble y, GLdouble z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glScalef)(GLfloat x, GLfloat y, GLfloat z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTranslated)(GLdouble x, GLdouble y, GLdouble z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTranslatef)(GLfloat x, GLfloat y, GLfloat z);
    GLboolean (__attribute__((__ms_abi__)) *ptr_ms_glIsList)(GLuint list);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDeleteLists)(GLuint list, GLsizei range);
    GLuint (__attribute__((__ms_abi__)) *ptr_ms_glGenLists)(GLsizei range);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNewList)(GLuint list, GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEndList)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCallList)(GLuint list);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCallLists)(GLsizei n, GLenum type, const GLvoid * lists);
    void (__attribute__((__ms_abi__)) *ptr_ms_glListBase)(GLuint base);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBegin)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEnd)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2d)(GLdouble x, GLdouble y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2f)(GLfloat x, GLfloat y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2i)(GLint x, GLint y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2s)(GLshort x, GLshort y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3d)(GLdouble x, GLdouble y, GLdouble z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3f)(GLfloat x, GLfloat y, GLfloat z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3i)(GLint x, GLint y, GLint z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3s)(GLshort x, GLshort y, GLshort z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4i)(GLint x, GLint y, GLint z, GLint w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex2sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex3sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertex4sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3i)(GLint nx, GLint ny, GLint nz);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3s)(GLshort nx, GLshort ny, GLshort nz);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3bv)(const GLbyte * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormal3sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexd)(GLdouble c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexf)(GLfloat c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexi)(GLint c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexs)(GLshort c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexub)(GLubyte c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexdv)(const GLdouble * c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexfv)(const GLfloat * c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexiv)(const GLint * c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexsv)(const GLshort * c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexubv)(const GLubyte * c);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3b)(GLbyte red, GLbyte green, GLbyte blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3d)(GLdouble red, GLdouble green, GLdouble blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3f)(GLfloat red, GLfloat green, GLfloat blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3i)(GLint red, GLint green, GLint blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3s)(GLshort red, GLshort green, GLshort blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3ub)(GLubyte red, GLubyte green, GLubyte blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3ui)(GLuint red, GLuint green, GLuint blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3us)(GLushort red, GLushort green, GLushort blue);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4i)(GLint red, GLint green, GLint blue, GLint alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3bv)(const GLbyte * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3ubv)(const GLubyte * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3uiv)(const GLuint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor3usv)(const GLushort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4bv)(const GLbyte * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4ubv)(const GLubyte * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4uiv)(const GLuint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColor4usv)(const GLushort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1d)(GLdouble s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1f)(GLfloat s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1i)(GLint s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1s)(GLshort s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2d)(GLdouble s, GLdouble t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2f)(GLfloat s, GLfloat t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2i)(GLint s, GLint t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2s)(GLshort s, GLshort t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3i)(GLint s, GLint t, GLint r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3s)(GLshort s, GLshort t, GLshort r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4i)(GLint s, GLint t, GLint r, GLint q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord1sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord2sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord3sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoord4sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2d)(GLdouble x, GLdouble y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2f)(GLfloat x, GLfloat y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2i)(GLint x, GLint y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2s)(GLshort x, GLshort y);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3i)(GLint x, GLint y, GLint z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3s)(GLshort x, GLshort y, GLshort z);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4i)(GLint x, GLint y, GLint z, GLint w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos2sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos3sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4dv)(const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4fv)(const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4iv)(const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRasterPos4sv)(const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRecti)(GLint x1, GLint y1, GLint x2, GLint y2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectdv)(const GLdouble * v1, const GLdouble * v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectfv)(const GLfloat * v1, const GLfloat * v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectiv)(const GLint * v1, const GLint * v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glRectsv)(const GLshort * v1, const GLshort * v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glVertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glNormalPointer)(GLenum type, GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glIndexPointer)(GLenum type, GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEdgeFlagPointer)(GLsizei stride, const GLvoid * ptr);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetPointerv)(GLenum pname, GLvoid * * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glArrayElement)(GLint i);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
    void (__attribute__((__ms_abi__)) *ptr_ms_glInterleavedArrays)(GLenum format, GLsizei stride, const GLvoid * pointer);
    void (__attribute__((__ms_abi__)) *ptr_ms_glShadeModel)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightf)(GLenum light, GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLighti)(GLenum light, GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightfv)(GLenum light, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightiv)(GLenum light, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetLightfv)(GLenum light, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetLightiv)(GLenum light, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightModelf)(GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightModeli)(GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightModelfv)(GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLightModeliv)(GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMaterialf)(GLenum face, GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMateriali)(GLenum face, GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMaterialiv)(GLenum face, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMaterialiv)(GLenum face, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorMaterial)(GLenum face, GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelZoom)(GLfloat xfactor, GLfloat yfactor);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelStoref)(GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelStorei)(GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelTransferf)(GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelTransferi)(GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetPixelMapfv)(GLenum map, GLfloat * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetPixelMapuiv)(GLenum map, GLuint * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetPixelMapusv)(GLenum map, GLushort * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
    void (__attribute__((__ms_abi__)) *ptr_ms_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glStencilMask)(GLuint mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClearStencil)(GLint s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGend)(GLenum coord, GLenum pname, GLdouble param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGenf)(GLenum coord, GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGeni)(GLenum coord, GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexGeniv)(GLenum coord, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexEnvf)(GLenum target, GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexEnvi)(GLenum target, GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexEnviv)(GLenum target, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexEnviv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexParameteri)(GLenum target, GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexImage1D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexImage2D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGenTextures)(GLsizei n, GLuint * textures);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDeleteTextures)(GLsizei n, const GLuint * textures);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBindTexture)(GLenum target, GLuint texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLclampf * priorities);
    GLboolean (__attribute__((__ms_abi__)) *ptr_ms_glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences);
    GLboolean (__attribute__((__ms_abi__)) *ptr_ms_glIsTexture)(GLuint texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMapdv)(GLenum target, GLenum query, GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMapfv)(GLenum target, GLenum query, GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMapiv)(GLenum target, GLenum query, GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord1d)(GLdouble u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord1f)(GLfloat u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord1dv)(const GLdouble * u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord1fv)(const GLfloat * u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord2d)(GLdouble u, GLdouble v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord2f)(GLfloat u, GLfloat v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord2dv)(const GLdouble * u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalCoord2fv)(const GLfloat * u);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalPoint1)(GLint i);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalPoint2)(GLint i, GLint j);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalMesh1)(GLenum mode, GLint i1, GLint i2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFogf)(GLenum pname, GLfloat param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFogi)(GLenum pname, GLint param);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFogfv)(GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFogiv)(GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPassThrough)(GLfloat token);
    void (__attribute__((__ms_abi__)) *ptr_ms_glSelectBuffer)(GLsizei size, GLuint * buffer);
    void (__attribute__((__ms_abi__)) *ptr_ms_glInitNames)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadName)(GLuint name);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPushName)(GLuint name);
    void (__attribute__((__ms_abi__)) *ptr_ms_glPopName)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexImage3D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorTableParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid * table);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBlendEquation)(GLenum mode);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
    void (__attribute__((__ms_abi__)) *ptr_ms_glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
    void (__attribute__((__ms_abi__)) *ptr_ms_glResetHistogram)(GLenum target);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMinmax)(GLenum target, GLenum internalformat, GLboolean sink);
    void (__attribute__((__ms_abi__)) *ptr_ms_glResetMinmax)(GLenum target);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionParameteri)(GLenum target, GLenum pname, GLint params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid * image);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint * params);
    void (__attribute__((__ms_abi__)) *ptr_ms_glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span);
    void (__attribute__((__ms_abi__)) *ptr_ms_glActiveTexture)(GLenum texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClientActiveTexture)(GLenum texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data);
    void (__attribute__((__ms_abi__)) *ptr_ms_glGetCompressedTexImage)(GLenum target, GLint lod, GLvoid * img);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1d)(GLenum target, GLdouble s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1dv)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1f)(GLenum target, GLfloat s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1fv)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1i)(GLenum target, GLint s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1iv)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1s)(GLenum target, GLshort s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1sv)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2dv)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2fv)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2i)(GLenum target, GLint s, GLint t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2iv)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2sv)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3dv)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3fv)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3iv)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3sv)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4dv)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4fv)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4iv)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4sv)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadTransposeMatrixd)(const GLdouble m[16]);
    void (__attribute__((__ms_abi__)) *ptr_ms_glLoadTransposeMatrixf)(const GLfloat m[16]);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultTransposeMatrixd)(const GLdouble m[16]);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultTransposeMatrixf)(const GLfloat m[16]);
    void (__attribute__((__ms_abi__)) *ptr_ms_glSampleCoverage)(GLclampf value, GLboolean invert);
    void (__attribute__((__ms_abi__)) *ptr_ms_glActiveTextureARB)(GLenum texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glClientActiveTextureARB)(GLenum texture);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1dARB)(GLenum target, GLdouble s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1dvARB)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1fARB)(GLenum target, GLfloat s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1fvARB)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1iARB)(GLenum target, GLint s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1ivARB)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1sARB)(GLenum target, GLshort s);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord1svARB)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2dvARB)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2fvARB)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2ivARB)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord2svARB)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3dvARB)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3fvARB)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3ivARB)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord3svARB)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4dvARB)(GLenum target, const GLdouble * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4fvARB)(GLenum target, const GLfloat * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4ivARB)(GLenum target, const GLint * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
    void (__attribute__((__ms_abi__)) *ptr_ms_glMultiTexCoord4svARB)(GLenum target, const GLshort * v);
    void (__attribute__((__ms_abi__)) *ptr_ms_glBlendEquationSeparateATI)(GLenum modeRGB, GLenum modeA);
    XVisualInfo * (__attribute__((__ms_abi__)) *ptr_ms_glXChooseVisual)(Display * dpy, int screen, int * attribList);
    GLXContext (__attribute__((__ms_abi__)) *ptr_ms_glXCreateContext)(Display * dpy, XVisualInfo * vis, GLXContext shareList, int direct);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXDestroyContext)(Display * dpy, GLXContext ctx);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXMakeCurrent)(Display * dpy, GLXDrawable drawable, GLXContext ctx);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXCopyContext)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXSwapBuffers)(Display * dpy, GLXDrawable drawable);
    GLXPixmap (__attribute__((__ms_abi__)) *ptr_ms_glXCreateGLXPixmap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXDestroyGLXPixmap)(Display * dpy, GLXPixmap pixmap);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXQueryExtension)(Display * dpy, int * errorb, int * event);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXQueryVersion)(Display * dpy, int * maj, int * min);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXIsDirect)(Display * dpy, GLXContext ctx);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXGetConfig)(Display * dpy, XVisualInfo * visual, int attrib, int * value);
    GLXContext (__attribute__((__ms_abi__)) *ptr_ms_glXGetCurrentContext)(void);
    GLXDrawable (__attribute__((__ms_abi__)) *ptr_ms_glXGetCurrentDrawable)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXWaitGL)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXWaitX)(void);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXUseXFont)(Font font, int first, int count, int list);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glXQueryExtensionsString)(Display * dpy, int screen);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glXQueryServerString)(Display * dpy, int screen, int name);
    const char * (__attribute__((__ms_abi__)) *ptr_ms_glXGetClientString)(Display * dpy, int name);
    Display * (__attribute__((__ms_abi__)) *ptr_ms_glXGetCurrentDisplay)(void);
    GLXFBConfig * (__attribute__((__ms_abi__)) *ptr_ms_glXChooseFBConfig)(Display * dpy, int screen, const int * attribList, int * nitems);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXGetFBConfigAttrib)(Display * dpy, GLXFBConfig config, int attribute, int * value);
    GLXFBConfig * (__attribute__((__ms_abi__)) *ptr_ms_glXGetFBConfigs)(Display * dpy, int screen, int * nelements);
    XVisualInfo * (__attribute__((__ms_abi__)) *ptr_ms_glXGetVisualFromFBConfig)(Display * dpy, GLXFBConfig config);
    GLXWindow (__attribute__((__ms_abi__)) *ptr_ms_glXCreateWindow)(Display * dpy, GLXFBConfig config, Window win, const int * attribList);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXDestroyWindow)(Display * dpy, GLXWindow window);
    GLXPixmap (__attribute__((__ms_abi__)) *ptr_ms_glXCreatePixmap)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attribList);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXDestroyPixmap)(Display * dpy, GLXPixmap pixmap);
    GLXPbuffer (__attribute__((__ms_abi__)) *ptr_ms_glXCreatePbuffer)(Display * dpy, GLXFBConfig config, const int * attribList);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXDestroyPbuffer)(Display * dpy, GLXPbuffer pbuf);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXQueryDrawable)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
    GLXContext (__attribute__((__ms_abi__)) *ptr_ms_glXCreateNewContext)(Display * dpy, GLXFBConfig config, int renderType, GLXContext shareList, int direct);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXMakeContextCurrent)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
    GLXDrawable (__attribute__((__ms_abi__)) *ptr_ms_glXGetCurrentReadDrawable)(void);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXQueryContext)(Display * dpy, GLXContext ctx, int attribute, int * value);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXSelectEvent)(Display * dpy, GLXDrawable drawable, unsigned long mask);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXGetSelectedEvent)(Display * dpy, GLXDrawable drawable, unsigned long * mask);
    __GLXextFuncPtr (__attribute__((__ms_abi__)) *ptr_ms_glXGetProcAddressARB)(const GLubyte * _1);
    void (*(__attribute__((__ms_abi__)) *ptr_ms_glXGetProcAddress)(const GLubyte * procname))(void);
    void * (__attribute__((__ms_abi__)) *ptr_ms_glXAllocateMemoryNV)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
    void (__attribute__((__ms_abi__)) *ptr_ms_glXFreeMemoryNV)(GLvoid * pointer);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXBindTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXReleaseTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXDrawableAttribARB)(Display * dpy, GLXDrawable draw, const int * attribList);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXGetFrameUsageMESA)(Display * dpy, GLXDrawable drawable, float * usage);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXBeginFrameTrackingMESA)(Display * dpy, GLXDrawable drawable);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXEndFrameTrackingMESA)(Display * dpy, GLXDrawable drawable);
    int (__attribute__((__ms_abi__)) *ptr_ms_glXQueryFrameTrackingMESA)(Display * dpy, GLXDrawable drawable, int64_t * swapCount, int64_t * missedFrames, float * lastMissedUsage);
} stub_funcs;

void *opengl;

void initialize_opengl(void) {
    char *candidates_opengl[] = { "libGL.so", "opengl.dll" };
    opengl = try_find_lib(candidates_opengl, 2);

    if (!opengl) {
        fprintf(stderr, "Unable to locate opengl, exiting!");
        exit(1);
    }

    stub_funcs.ptr_glClearIndex = try_find_sym(opengl, "glClearIndex");
    stub_funcs.ptr_glClearColor = try_find_sym(opengl, "glClearColor");
    stub_funcs.ptr_glClear = try_find_sym(opengl, "glClear");
    stub_funcs.ptr_glIndexMask = try_find_sym(opengl, "glIndexMask");
    stub_funcs.ptr_glColorMask = try_find_sym(opengl, "glColorMask");
    stub_funcs.ptr_glAlphaFunc = try_find_sym(opengl, "glAlphaFunc");
    stub_funcs.ptr_glBlendFunc = try_find_sym(opengl, "glBlendFunc");
    stub_funcs.ptr_glLogicOp = try_find_sym(opengl, "glLogicOp");
    stub_funcs.ptr_glCullFace = try_find_sym(opengl, "glCullFace");
    stub_funcs.ptr_glFrontFace = try_find_sym(opengl, "glFrontFace");
    stub_funcs.ptr_glPointSize = try_find_sym(opengl, "glPointSize");
    stub_funcs.ptr_glLineWidth = try_find_sym(opengl, "glLineWidth");
    stub_funcs.ptr_glLineStipple = try_find_sym(opengl, "glLineStipple");
    stub_funcs.ptr_glPolygonMode = try_find_sym(opengl, "glPolygonMode");
    stub_funcs.ptr_glPolygonOffset = try_find_sym(opengl, "glPolygonOffset");
    stub_funcs.ptr_glPolygonStipple = try_find_sym(opengl, "glPolygonStipple");
    stub_funcs.ptr_glGetPolygonStipple = try_find_sym(opengl, "glGetPolygonStipple");
    stub_funcs.ptr_glEdgeFlag = try_find_sym(opengl, "glEdgeFlag");
    stub_funcs.ptr_glEdgeFlagv = try_find_sym(opengl, "glEdgeFlagv");
    stub_funcs.ptr_glScissor = try_find_sym(opengl, "glScissor");
    stub_funcs.ptr_glClipPlane = try_find_sym(opengl, "glClipPlane");
    stub_funcs.ptr_glGetClipPlane = try_find_sym(opengl, "glGetClipPlane");
    stub_funcs.ptr_glDrawBuffer = try_find_sym(opengl, "glDrawBuffer");
    stub_funcs.ptr_glReadBuffer = try_find_sym(opengl, "glReadBuffer");
    stub_funcs.ptr_glEnable = try_find_sym(opengl, "glEnable");
    stub_funcs.ptr_glDisable = try_find_sym(opengl, "glDisable");
    stub_funcs.ptr_glIsEnabled = try_find_sym(opengl, "glIsEnabled");
    stub_funcs.ptr_glEnableClientState = try_find_sym(opengl, "glEnableClientState");
    stub_funcs.ptr_glDisableClientState = try_find_sym(opengl, "glDisableClientState");
    stub_funcs.ptr_glGetBooleanv = try_find_sym(opengl, "glGetBooleanv");
    stub_funcs.ptr_glGetDoublev = try_find_sym(opengl, "glGetDoublev");
    stub_funcs.ptr_glGetFloatv = try_find_sym(opengl, "glGetFloatv");
    stub_funcs.ptr_glGetIntegerv = try_find_sym(opengl, "glGetIntegerv");
    stub_funcs.ptr_glPushAttrib = try_find_sym(opengl, "glPushAttrib");
    stub_funcs.ptr_glPopAttrib = try_find_sym(opengl, "glPopAttrib");
    stub_funcs.ptr_glPushClientAttrib = try_find_sym(opengl, "glPushClientAttrib");
    stub_funcs.ptr_glPopClientAttrib = try_find_sym(opengl, "glPopClientAttrib");
    stub_funcs.ptr_glRenderMode = try_find_sym(opengl, "glRenderMode");
    stub_funcs.ptr_glGetError = try_find_sym(opengl, "glGetError");
    stub_funcs.ptr_glGetString = try_find_sym(opengl, "glGetString");
    stub_funcs.ptr_glFinish = try_find_sym(opengl, "glFinish");
    stub_funcs.ptr_glFlush = try_find_sym(opengl, "glFlush");
    stub_funcs.ptr_glHint = try_find_sym(opengl, "glHint");
    stub_funcs.ptr_glClearDepth = try_find_sym(opengl, "glClearDepth");
    stub_funcs.ptr_glDepthFunc = try_find_sym(opengl, "glDepthFunc");
    stub_funcs.ptr_glDepthMask = try_find_sym(opengl, "glDepthMask");
    stub_funcs.ptr_glDepthRange = try_find_sym(opengl, "glDepthRange");
    stub_funcs.ptr_glClearAccum = try_find_sym(opengl, "glClearAccum");
    stub_funcs.ptr_glAccum = try_find_sym(opengl, "glAccum");
    stub_funcs.ptr_glMatrixMode = try_find_sym(opengl, "glMatrixMode");
    stub_funcs.ptr_glOrtho = try_find_sym(opengl, "glOrtho");
    stub_funcs.ptr_glFrustum = try_find_sym(opengl, "glFrustum");
    stub_funcs.ptr_glViewport = try_find_sym(opengl, "glViewport");
    stub_funcs.ptr_glPushMatrix = try_find_sym(opengl, "glPushMatrix");
    stub_funcs.ptr_glPopMatrix = try_find_sym(opengl, "glPopMatrix");
    stub_funcs.ptr_glLoadIdentity = try_find_sym(opengl, "glLoadIdentity");
    stub_funcs.ptr_glLoadMatrixd = try_find_sym(opengl, "glLoadMatrixd");
    stub_funcs.ptr_glLoadMatrixf = try_find_sym(opengl, "glLoadMatrixf");
    stub_funcs.ptr_glMultMatrixd = try_find_sym(opengl, "glMultMatrixd");
    stub_funcs.ptr_glMultMatrixf = try_find_sym(opengl, "glMultMatrixf");
    stub_funcs.ptr_glRotated = try_find_sym(opengl, "glRotated");
    stub_funcs.ptr_glRotatef = try_find_sym(opengl, "glRotatef");
    stub_funcs.ptr_glScaled = try_find_sym(opengl, "glScaled");
    stub_funcs.ptr_glScalef = try_find_sym(opengl, "glScalef");
    stub_funcs.ptr_glTranslated = try_find_sym(opengl, "glTranslated");
    stub_funcs.ptr_glTranslatef = try_find_sym(opengl, "glTranslatef");
    stub_funcs.ptr_glIsList = try_find_sym(opengl, "glIsList");
    stub_funcs.ptr_glDeleteLists = try_find_sym(opengl, "glDeleteLists");
    stub_funcs.ptr_glGenLists = try_find_sym(opengl, "glGenLists");
    stub_funcs.ptr_glNewList = try_find_sym(opengl, "glNewList");
    stub_funcs.ptr_glEndList = try_find_sym(opengl, "glEndList");
    stub_funcs.ptr_glCallList = try_find_sym(opengl, "glCallList");
    stub_funcs.ptr_glCallLists = try_find_sym(opengl, "glCallLists");
    stub_funcs.ptr_glListBase = try_find_sym(opengl, "glListBase");
    stub_funcs.ptr_glBegin = try_find_sym(opengl, "glBegin");
    stub_funcs.ptr_glEnd = try_find_sym(opengl, "glEnd");
    stub_funcs.ptr_glVertex2d = try_find_sym(opengl, "glVertex2d");
    stub_funcs.ptr_glVertex2f = try_find_sym(opengl, "glVertex2f");
    stub_funcs.ptr_glVertex2i = try_find_sym(opengl, "glVertex2i");
    stub_funcs.ptr_glVertex2s = try_find_sym(opengl, "glVertex2s");
    stub_funcs.ptr_glVertex3d = try_find_sym(opengl, "glVertex3d");
    stub_funcs.ptr_glVertex3f = try_find_sym(opengl, "glVertex3f");
    stub_funcs.ptr_glVertex3i = try_find_sym(opengl, "glVertex3i");
    stub_funcs.ptr_glVertex3s = try_find_sym(opengl, "glVertex3s");
    stub_funcs.ptr_glVertex4d = try_find_sym(opengl, "glVertex4d");
    stub_funcs.ptr_glVertex4f = try_find_sym(opengl, "glVertex4f");
    stub_funcs.ptr_glVertex4i = try_find_sym(opengl, "glVertex4i");
    stub_funcs.ptr_glVertex4s = try_find_sym(opengl, "glVertex4s");
    stub_funcs.ptr_glVertex2dv = try_find_sym(opengl, "glVertex2dv");
    stub_funcs.ptr_glVertex2fv = try_find_sym(opengl, "glVertex2fv");
    stub_funcs.ptr_glVertex2iv = try_find_sym(opengl, "glVertex2iv");
    stub_funcs.ptr_glVertex2sv = try_find_sym(opengl, "glVertex2sv");
    stub_funcs.ptr_glVertex3dv = try_find_sym(opengl, "glVertex3dv");
    stub_funcs.ptr_glVertex3fv = try_find_sym(opengl, "glVertex3fv");
    stub_funcs.ptr_glVertex3iv = try_find_sym(opengl, "glVertex3iv");
    stub_funcs.ptr_glVertex3sv = try_find_sym(opengl, "glVertex3sv");
    stub_funcs.ptr_glVertex4dv = try_find_sym(opengl, "glVertex4dv");
    stub_funcs.ptr_glVertex4fv = try_find_sym(opengl, "glVertex4fv");
    stub_funcs.ptr_glVertex4iv = try_find_sym(opengl, "glVertex4iv");
    stub_funcs.ptr_glVertex4sv = try_find_sym(opengl, "glVertex4sv");
    stub_funcs.ptr_glNormal3b = try_find_sym(opengl, "glNormal3b");
    stub_funcs.ptr_glNormal3d = try_find_sym(opengl, "glNormal3d");
    stub_funcs.ptr_glNormal3f = try_find_sym(opengl, "glNormal3f");
    stub_funcs.ptr_glNormal3i = try_find_sym(opengl, "glNormal3i");
    stub_funcs.ptr_glNormal3s = try_find_sym(opengl, "glNormal3s");
    stub_funcs.ptr_glNormal3bv = try_find_sym(opengl, "glNormal3bv");
    stub_funcs.ptr_glNormal3dv = try_find_sym(opengl, "glNormal3dv");
    stub_funcs.ptr_glNormal3fv = try_find_sym(opengl, "glNormal3fv");
    stub_funcs.ptr_glNormal3iv = try_find_sym(opengl, "glNormal3iv");
    stub_funcs.ptr_glNormal3sv = try_find_sym(opengl, "glNormal3sv");
    stub_funcs.ptr_glIndexd = try_find_sym(opengl, "glIndexd");
    stub_funcs.ptr_glIndexf = try_find_sym(opengl, "glIndexf");
    stub_funcs.ptr_glIndexi = try_find_sym(opengl, "glIndexi");
    stub_funcs.ptr_glIndexs = try_find_sym(opengl, "glIndexs");
    stub_funcs.ptr_glIndexub = try_find_sym(opengl, "glIndexub");
    stub_funcs.ptr_glIndexdv = try_find_sym(opengl, "glIndexdv");
    stub_funcs.ptr_glIndexfv = try_find_sym(opengl, "glIndexfv");
    stub_funcs.ptr_glIndexiv = try_find_sym(opengl, "glIndexiv");
    stub_funcs.ptr_glIndexsv = try_find_sym(opengl, "glIndexsv");
    stub_funcs.ptr_glIndexubv = try_find_sym(opengl, "glIndexubv");
    stub_funcs.ptr_glColor3b = try_find_sym(opengl, "glColor3b");
    stub_funcs.ptr_glColor3d = try_find_sym(opengl, "glColor3d");
    stub_funcs.ptr_glColor3f = try_find_sym(opengl, "glColor3f");
    stub_funcs.ptr_glColor3i = try_find_sym(opengl, "glColor3i");
    stub_funcs.ptr_glColor3s = try_find_sym(opengl, "glColor3s");
    stub_funcs.ptr_glColor3ub = try_find_sym(opengl, "glColor3ub");
    stub_funcs.ptr_glColor3ui = try_find_sym(opengl, "glColor3ui");
    stub_funcs.ptr_glColor3us = try_find_sym(opengl, "glColor3us");
    stub_funcs.ptr_glColor4b = try_find_sym(opengl, "glColor4b");
    stub_funcs.ptr_glColor4d = try_find_sym(opengl, "glColor4d");
    stub_funcs.ptr_glColor4f = try_find_sym(opengl, "glColor4f");
    stub_funcs.ptr_glColor4i = try_find_sym(opengl, "glColor4i");
    stub_funcs.ptr_glColor4s = try_find_sym(opengl, "glColor4s");
    stub_funcs.ptr_glColor4ub = try_find_sym(opengl, "glColor4ub");
    stub_funcs.ptr_glColor4ui = try_find_sym(opengl, "glColor4ui");
    stub_funcs.ptr_glColor4us = try_find_sym(opengl, "glColor4us");
    stub_funcs.ptr_glColor3bv = try_find_sym(opengl, "glColor3bv");
    stub_funcs.ptr_glColor3dv = try_find_sym(opengl, "glColor3dv");
    stub_funcs.ptr_glColor3fv = try_find_sym(opengl, "glColor3fv");
    stub_funcs.ptr_glColor3iv = try_find_sym(opengl, "glColor3iv");
    stub_funcs.ptr_glColor3sv = try_find_sym(opengl, "glColor3sv");
    stub_funcs.ptr_glColor3ubv = try_find_sym(opengl, "glColor3ubv");
    stub_funcs.ptr_glColor3uiv = try_find_sym(opengl, "glColor3uiv");
    stub_funcs.ptr_glColor3usv = try_find_sym(opengl, "glColor3usv");
    stub_funcs.ptr_glColor4bv = try_find_sym(opengl, "glColor4bv");
    stub_funcs.ptr_glColor4dv = try_find_sym(opengl, "glColor4dv");
    stub_funcs.ptr_glColor4fv = try_find_sym(opengl, "glColor4fv");
    stub_funcs.ptr_glColor4iv = try_find_sym(opengl, "glColor4iv");
    stub_funcs.ptr_glColor4sv = try_find_sym(opengl, "glColor4sv");
    stub_funcs.ptr_glColor4ubv = try_find_sym(opengl, "glColor4ubv");
    stub_funcs.ptr_glColor4uiv = try_find_sym(opengl, "glColor4uiv");
    stub_funcs.ptr_glColor4usv = try_find_sym(opengl, "glColor4usv");
    stub_funcs.ptr_glTexCoord1d = try_find_sym(opengl, "glTexCoord1d");
    stub_funcs.ptr_glTexCoord1f = try_find_sym(opengl, "glTexCoord1f");
    stub_funcs.ptr_glTexCoord1i = try_find_sym(opengl, "glTexCoord1i");
    stub_funcs.ptr_glTexCoord1s = try_find_sym(opengl, "glTexCoord1s");
    stub_funcs.ptr_glTexCoord2d = try_find_sym(opengl, "glTexCoord2d");
    stub_funcs.ptr_glTexCoord2f = try_find_sym(opengl, "glTexCoord2f");
    stub_funcs.ptr_glTexCoord2i = try_find_sym(opengl, "glTexCoord2i");
    stub_funcs.ptr_glTexCoord2s = try_find_sym(opengl, "glTexCoord2s");
    stub_funcs.ptr_glTexCoord3d = try_find_sym(opengl, "glTexCoord3d");
    stub_funcs.ptr_glTexCoord3f = try_find_sym(opengl, "glTexCoord3f");
    stub_funcs.ptr_glTexCoord3i = try_find_sym(opengl, "glTexCoord3i");
    stub_funcs.ptr_glTexCoord3s = try_find_sym(opengl, "glTexCoord3s");
    stub_funcs.ptr_glTexCoord4d = try_find_sym(opengl, "glTexCoord4d");
    stub_funcs.ptr_glTexCoord4f = try_find_sym(opengl, "glTexCoord4f");
    stub_funcs.ptr_glTexCoord4i = try_find_sym(opengl, "glTexCoord4i");
    stub_funcs.ptr_glTexCoord4s = try_find_sym(opengl, "glTexCoord4s");
    stub_funcs.ptr_glTexCoord1dv = try_find_sym(opengl, "glTexCoord1dv");
    stub_funcs.ptr_glTexCoord1fv = try_find_sym(opengl, "glTexCoord1fv");
    stub_funcs.ptr_glTexCoord1iv = try_find_sym(opengl, "glTexCoord1iv");
    stub_funcs.ptr_glTexCoord1sv = try_find_sym(opengl, "glTexCoord1sv");
    stub_funcs.ptr_glTexCoord2dv = try_find_sym(opengl, "glTexCoord2dv");
    stub_funcs.ptr_glTexCoord2fv = try_find_sym(opengl, "glTexCoord2fv");
    stub_funcs.ptr_glTexCoord2iv = try_find_sym(opengl, "glTexCoord2iv");
    stub_funcs.ptr_glTexCoord2sv = try_find_sym(opengl, "glTexCoord2sv");
    stub_funcs.ptr_glTexCoord3dv = try_find_sym(opengl, "glTexCoord3dv");
    stub_funcs.ptr_glTexCoord3fv = try_find_sym(opengl, "glTexCoord3fv");
    stub_funcs.ptr_glTexCoord3iv = try_find_sym(opengl, "glTexCoord3iv");
    stub_funcs.ptr_glTexCoord3sv = try_find_sym(opengl, "glTexCoord3sv");
    stub_funcs.ptr_glTexCoord4dv = try_find_sym(opengl, "glTexCoord4dv");
    stub_funcs.ptr_glTexCoord4fv = try_find_sym(opengl, "glTexCoord4fv");
    stub_funcs.ptr_glTexCoord4iv = try_find_sym(opengl, "glTexCoord4iv");
    stub_funcs.ptr_glTexCoord4sv = try_find_sym(opengl, "glTexCoord4sv");
    stub_funcs.ptr_glRasterPos2d = try_find_sym(opengl, "glRasterPos2d");
    stub_funcs.ptr_glRasterPos2f = try_find_sym(opengl, "glRasterPos2f");
    stub_funcs.ptr_glRasterPos2i = try_find_sym(opengl, "glRasterPos2i");
    stub_funcs.ptr_glRasterPos2s = try_find_sym(opengl, "glRasterPos2s");
    stub_funcs.ptr_glRasterPos3d = try_find_sym(opengl, "glRasterPos3d");
    stub_funcs.ptr_glRasterPos3f = try_find_sym(opengl, "glRasterPos3f");
    stub_funcs.ptr_glRasterPos3i = try_find_sym(opengl, "glRasterPos3i");
    stub_funcs.ptr_glRasterPos3s = try_find_sym(opengl, "glRasterPos3s");
    stub_funcs.ptr_glRasterPos4d = try_find_sym(opengl, "glRasterPos4d");
    stub_funcs.ptr_glRasterPos4f = try_find_sym(opengl, "glRasterPos4f");
    stub_funcs.ptr_glRasterPos4i = try_find_sym(opengl, "glRasterPos4i");
    stub_funcs.ptr_glRasterPos4s = try_find_sym(opengl, "glRasterPos4s");
    stub_funcs.ptr_glRasterPos2dv = try_find_sym(opengl, "glRasterPos2dv");
    stub_funcs.ptr_glRasterPos2fv = try_find_sym(opengl, "glRasterPos2fv");
    stub_funcs.ptr_glRasterPos2iv = try_find_sym(opengl, "glRasterPos2iv");
    stub_funcs.ptr_glRasterPos2sv = try_find_sym(opengl, "glRasterPos2sv");
    stub_funcs.ptr_glRasterPos3dv = try_find_sym(opengl, "glRasterPos3dv");
    stub_funcs.ptr_glRasterPos3fv = try_find_sym(opengl, "glRasterPos3fv");
    stub_funcs.ptr_glRasterPos3iv = try_find_sym(opengl, "glRasterPos3iv");
    stub_funcs.ptr_glRasterPos3sv = try_find_sym(opengl, "glRasterPos3sv");
    stub_funcs.ptr_glRasterPos4dv = try_find_sym(opengl, "glRasterPos4dv");
    stub_funcs.ptr_glRasterPos4fv = try_find_sym(opengl, "glRasterPos4fv");
    stub_funcs.ptr_glRasterPos4iv = try_find_sym(opengl, "glRasterPos4iv");
    stub_funcs.ptr_glRasterPos4sv = try_find_sym(opengl, "glRasterPos4sv");
    stub_funcs.ptr_glRectd = try_find_sym(opengl, "glRectd");
    stub_funcs.ptr_glRectf = try_find_sym(opengl, "glRectf");
    stub_funcs.ptr_glRecti = try_find_sym(opengl, "glRecti");
    stub_funcs.ptr_glRects = try_find_sym(opengl, "glRects");
    stub_funcs.ptr_glRectdv = try_find_sym(opengl, "glRectdv");
    stub_funcs.ptr_glRectfv = try_find_sym(opengl, "glRectfv");
    stub_funcs.ptr_glRectiv = try_find_sym(opengl, "glRectiv");
    stub_funcs.ptr_glRectsv = try_find_sym(opengl, "glRectsv");
    stub_funcs.ptr_glVertexPointer = try_find_sym(opengl, "glVertexPointer");
    stub_funcs.ptr_glNormalPointer = try_find_sym(opengl, "glNormalPointer");
    stub_funcs.ptr_glColorPointer = try_find_sym(opengl, "glColorPointer");
    stub_funcs.ptr_glIndexPointer = try_find_sym(opengl, "glIndexPointer");
    stub_funcs.ptr_glTexCoordPointer = try_find_sym(opengl, "glTexCoordPointer");
    stub_funcs.ptr_glEdgeFlagPointer = try_find_sym(opengl, "glEdgeFlagPointer");
    stub_funcs.ptr_glGetPointerv = try_find_sym(opengl, "glGetPointerv");
    stub_funcs.ptr_glArrayElement = try_find_sym(opengl, "glArrayElement");
    stub_funcs.ptr_glDrawArrays = try_find_sym(opengl, "glDrawArrays");
    stub_funcs.ptr_glDrawElements = try_find_sym(opengl, "glDrawElements");
    stub_funcs.ptr_glInterleavedArrays = try_find_sym(opengl, "glInterleavedArrays");
    stub_funcs.ptr_glShadeModel = try_find_sym(opengl, "glShadeModel");
    stub_funcs.ptr_glLightf = try_find_sym(opengl, "glLightf");
    stub_funcs.ptr_glLighti = try_find_sym(opengl, "glLighti");
    stub_funcs.ptr_glLightfv = try_find_sym(opengl, "glLightfv");
    stub_funcs.ptr_glLightiv = try_find_sym(opengl, "glLightiv");
    stub_funcs.ptr_glGetLightfv = try_find_sym(opengl, "glGetLightfv");
    stub_funcs.ptr_glGetLightiv = try_find_sym(opengl, "glGetLightiv");
    stub_funcs.ptr_glLightModelf = try_find_sym(opengl, "glLightModelf");
    stub_funcs.ptr_glLightModeli = try_find_sym(opengl, "glLightModeli");
    stub_funcs.ptr_glLightModelfv = try_find_sym(opengl, "glLightModelfv");
    stub_funcs.ptr_glLightModeliv = try_find_sym(opengl, "glLightModeliv");
    stub_funcs.ptr_glMaterialf = try_find_sym(opengl, "glMaterialf");
    stub_funcs.ptr_glMateriali = try_find_sym(opengl, "glMateriali");
    stub_funcs.ptr_glMaterialfv = try_find_sym(opengl, "glMaterialfv");
    stub_funcs.ptr_glMaterialiv = try_find_sym(opengl, "glMaterialiv");
    stub_funcs.ptr_glGetMaterialfv = try_find_sym(opengl, "glGetMaterialfv");
    stub_funcs.ptr_glGetMaterialiv = try_find_sym(opengl, "glGetMaterialiv");
    stub_funcs.ptr_glColorMaterial = try_find_sym(opengl, "glColorMaterial");
    stub_funcs.ptr_glPixelZoom = try_find_sym(opengl, "glPixelZoom");
    stub_funcs.ptr_glPixelStoref = try_find_sym(opengl, "glPixelStoref");
    stub_funcs.ptr_glPixelStorei = try_find_sym(opengl, "glPixelStorei");
    stub_funcs.ptr_glPixelTransferf = try_find_sym(opengl, "glPixelTransferf");
    stub_funcs.ptr_glPixelTransferi = try_find_sym(opengl, "glPixelTransferi");
    stub_funcs.ptr_glPixelMapfv = try_find_sym(opengl, "glPixelMapfv");
    stub_funcs.ptr_glPixelMapuiv = try_find_sym(opengl, "glPixelMapuiv");
    stub_funcs.ptr_glPixelMapusv = try_find_sym(opengl, "glPixelMapusv");
    stub_funcs.ptr_glGetPixelMapfv = try_find_sym(opengl, "glGetPixelMapfv");
    stub_funcs.ptr_glGetPixelMapuiv = try_find_sym(opengl, "glGetPixelMapuiv");
    stub_funcs.ptr_glGetPixelMapusv = try_find_sym(opengl, "glGetPixelMapusv");
    stub_funcs.ptr_glBitmap = try_find_sym(opengl, "glBitmap");
    stub_funcs.ptr_glReadPixels = try_find_sym(opengl, "glReadPixels");
    stub_funcs.ptr_glDrawPixels = try_find_sym(opengl, "glDrawPixels");
    stub_funcs.ptr_glCopyPixels = try_find_sym(opengl, "glCopyPixels");
    stub_funcs.ptr_glStencilFunc = try_find_sym(opengl, "glStencilFunc");
    stub_funcs.ptr_glStencilMask = try_find_sym(opengl, "glStencilMask");
    stub_funcs.ptr_glStencilOp = try_find_sym(opengl, "glStencilOp");
    stub_funcs.ptr_glClearStencil = try_find_sym(opengl, "glClearStencil");
    stub_funcs.ptr_glTexGend = try_find_sym(opengl, "glTexGend");
    stub_funcs.ptr_glTexGenf = try_find_sym(opengl, "glTexGenf");
    stub_funcs.ptr_glTexGeni = try_find_sym(opengl, "glTexGeni");
    stub_funcs.ptr_glTexGendv = try_find_sym(opengl, "glTexGendv");
    stub_funcs.ptr_glTexGenfv = try_find_sym(opengl, "glTexGenfv");
    stub_funcs.ptr_glTexGeniv = try_find_sym(opengl, "glTexGeniv");
    stub_funcs.ptr_glGetTexGendv = try_find_sym(opengl, "glGetTexGendv");
    stub_funcs.ptr_glGetTexGenfv = try_find_sym(opengl, "glGetTexGenfv");
    stub_funcs.ptr_glGetTexGeniv = try_find_sym(opengl, "glGetTexGeniv");
    stub_funcs.ptr_glTexEnvf = try_find_sym(opengl, "glTexEnvf");
    stub_funcs.ptr_glTexEnvi = try_find_sym(opengl, "glTexEnvi");
    stub_funcs.ptr_glTexEnvfv = try_find_sym(opengl, "glTexEnvfv");
    stub_funcs.ptr_glTexEnviv = try_find_sym(opengl, "glTexEnviv");
    stub_funcs.ptr_glGetTexEnvfv = try_find_sym(opengl, "glGetTexEnvfv");
    stub_funcs.ptr_glGetTexEnviv = try_find_sym(opengl, "glGetTexEnviv");
    stub_funcs.ptr_glTexParameterf = try_find_sym(opengl, "glTexParameterf");
    stub_funcs.ptr_glTexParameteri = try_find_sym(opengl, "glTexParameteri");
    stub_funcs.ptr_glTexParameterfv = try_find_sym(opengl, "glTexParameterfv");
    stub_funcs.ptr_glTexParameteriv = try_find_sym(opengl, "glTexParameteriv");
    stub_funcs.ptr_glGetTexParameterfv = try_find_sym(opengl, "glGetTexParameterfv");
    stub_funcs.ptr_glGetTexParameteriv = try_find_sym(opengl, "glGetTexParameteriv");
    stub_funcs.ptr_glGetTexLevelParameterfv = try_find_sym(opengl, "glGetTexLevelParameterfv");
    stub_funcs.ptr_glGetTexLevelParameteriv = try_find_sym(opengl, "glGetTexLevelParameteriv");
    stub_funcs.ptr_glTexImage1D = try_find_sym(opengl, "glTexImage1D");
    stub_funcs.ptr_glTexImage2D = try_find_sym(opengl, "glTexImage2D");
    stub_funcs.ptr_glGetTexImage = try_find_sym(opengl, "glGetTexImage");
    stub_funcs.ptr_glGenTextures = try_find_sym(opengl, "glGenTextures");
    stub_funcs.ptr_glDeleteTextures = try_find_sym(opengl, "glDeleteTextures");
    stub_funcs.ptr_glBindTexture = try_find_sym(opengl, "glBindTexture");
    stub_funcs.ptr_glPrioritizeTextures = try_find_sym(opengl, "glPrioritizeTextures");
    stub_funcs.ptr_glAreTexturesResident = try_find_sym(opengl, "glAreTexturesResident");
    stub_funcs.ptr_glIsTexture = try_find_sym(opengl, "glIsTexture");
    stub_funcs.ptr_glTexSubImage1D = try_find_sym(opengl, "glTexSubImage1D");
    stub_funcs.ptr_glTexSubImage2D = try_find_sym(opengl, "glTexSubImage2D");
    stub_funcs.ptr_glCopyTexImage1D = try_find_sym(opengl, "glCopyTexImage1D");
    stub_funcs.ptr_glCopyTexImage2D = try_find_sym(opengl, "glCopyTexImage2D");
    stub_funcs.ptr_glCopyTexSubImage1D = try_find_sym(opengl, "glCopyTexSubImage1D");
    stub_funcs.ptr_glCopyTexSubImage2D = try_find_sym(opengl, "glCopyTexSubImage2D");
    stub_funcs.ptr_glMap1d = try_find_sym(opengl, "glMap1d");
    stub_funcs.ptr_glMap1f = try_find_sym(opengl, "glMap1f");
    stub_funcs.ptr_glMap2d = try_find_sym(opengl, "glMap2d");
    stub_funcs.ptr_glMap2f = try_find_sym(opengl, "glMap2f");
    stub_funcs.ptr_glGetMapdv = try_find_sym(opengl, "glGetMapdv");
    stub_funcs.ptr_glGetMapfv = try_find_sym(opengl, "glGetMapfv");
    stub_funcs.ptr_glGetMapiv = try_find_sym(opengl, "glGetMapiv");
    stub_funcs.ptr_glEvalCoord1d = try_find_sym(opengl, "glEvalCoord1d");
    stub_funcs.ptr_glEvalCoord1f = try_find_sym(opengl, "glEvalCoord1f");
    stub_funcs.ptr_glEvalCoord1dv = try_find_sym(opengl, "glEvalCoord1dv");
    stub_funcs.ptr_glEvalCoord1fv = try_find_sym(opengl, "glEvalCoord1fv");
    stub_funcs.ptr_glEvalCoord2d = try_find_sym(opengl, "glEvalCoord2d");
    stub_funcs.ptr_glEvalCoord2f = try_find_sym(opengl, "glEvalCoord2f");
    stub_funcs.ptr_glEvalCoord2dv = try_find_sym(opengl, "glEvalCoord2dv");
    stub_funcs.ptr_glEvalCoord2fv = try_find_sym(opengl, "glEvalCoord2fv");
    stub_funcs.ptr_glMapGrid1d = try_find_sym(opengl, "glMapGrid1d");
    stub_funcs.ptr_glMapGrid1f = try_find_sym(opengl, "glMapGrid1f");
    stub_funcs.ptr_glMapGrid2d = try_find_sym(opengl, "glMapGrid2d");
    stub_funcs.ptr_glMapGrid2f = try_find_sym(opengl, "glMapGrid2f");
    stub_funcs.ptr_glEvalPoint1 = try_find_sym(opengl, "glEvalPoint1");
    stub_funcs.ptr_glEvalPoint2 = try_find_sym(opengl, "glEvalPoint2");
    stub_funcs.ptr_glEvalMesh1 = try_find_sym(opengl, "glEvalMesh1");
    stub_funcs.ptr_glEvalMesh2 = try_find_sym(opengl, "glEvalMesh2");
    stub_funcs.ptr_glFogf = try_find_sym(opengl, "glFogf");
    stub_funcs.ptr_glFogi = try_find_sym(opengl, "glFogi");
    stub_funcs.ptr_glFogfv = try_find_sym(opengl, "glFogfv");
    stub_funcs.ptr_glFogiv = try_find_sym(opengl, "glFogiv");
    stub_funcs.ptr_glFeedbackBuffer = try_find_sym(opengl, "glFeedbackBuffer");
    stub_funcs.ptr_glPassThrough = try_find_sym(opengl, "glPassThrough");
    stub_funcs.ptr_glSelectBuffer = try_find_sym(opengl, "glSelectBuffer");
    stub_funcs.ptr_glInitNames = try_find_sym(opengl, "glInitNames");
    stub_funcs.ptr_glLoadName = try_find_sym(opengl, "glLoadName");
    stub_funcs.ptr_glPushName = try_find_sym(opengl, "glPushName");
    stub_funcs.ptr_glPopName = try_find_sym(opengl, "glPopName");
    stub_funcs.ptr_glDrawRangeElements = try_find_sym(opengl, "glDrawRangeElements");
    stub_funcs.ptr_glTexImage3D = try_find_sym(opengl, "glTexImage3D");
    stub_funcs.ptr_glTexSubImage3D = try_find_sym(opengl, "glTexSubImage3D");
    stub_funcs.ptr_glCopyTexSubImage3D = try_find_sym(opengl, "glCopyTexSubImage3D");
    stub_funcs.ptr_glColorTable = try_find_sym(opengl, "glColorTable");
    stub_funcs.ptr_glColorSubTable = try_find_sym(opengl, "glColorSubTable");
    stub_funcs.ptr_glColorTableParameteriv = try_find_sym(opengl, "glColorTableParameteriv");
    stub_funcs.ptr_glColorTableParameterfv = try_find_sym(opengl, "glColorTableParameterfv");
    stub_funcs.ptr_glCopyColorSubTable = try_find_sym(opengl, "glCopyColorSubTable");
    stub_funcs.ptr_glCopyColorTable = try_find_sym(opengl, "glCopyColorTable");
    stub_funcs.ptr_glGetColorTable = try_find_sym(opengl, "glGetColorTable");
    stub_funcs.ptr_glGetColorTableParameterfv = try_find_sym(opengl, "glGetColorTableParameterfv");
    stub_funcs.ptr_glGetColorTableParameteriv = try_find_sym(opengl, "glGetColorTableParameteriv");
    stub_funcs.ptr_glBlendEquation = try_find_sym(opengl, "glBlendEquation");
    stub_funcs.ptr_glBlendColor = try_find_sym(opengl, "glBlendColor");
    stub_funcs.ptr_glHistogram = try_find_sym(opengl, "glHistogram");
    stub_funcs.ptr_glResetHistogram = try_find_sym(opengl, "glResetHistogram");
    stub_funcs.ptr_glGetHistogram = try_find_sym(opengl, "glGetHistogram");
    stub_funcs.ptr_glGetHistogramParameterfv = try_find_sym(opengl, "glGetHistogramParameterfv");
    stub_funcs.ptr_glGetHistogramParameteriv = try_find_sym(opengl, "glGetHistogramParameteriv");
    stub_funcs.ptr_glMinmax = try_find_sym(opengl, "glMinmax");
    stub_funcs.ptr_glResetMinmax = try_find_sym(opengl, "glResetMinmax");
    stub_funcs.ptr_glGetMinmax = try_find_sym(opengl, "glGetMinmax");
    stub_funcs.ptr_glGetMinmaxParameterfv = try_find_sym(opengl, "glGetMinmaxParameterfv");
    stub_funcs.ptr_glGetMinmaxParameteriv = try_find_sym(opengl, "glGetMinmaxParameteriv");
    stub_funcs.ptr_glConvolutionFilter1D = try_find_sym(opengl, "glConvolutionFilter1D");
    stub_funcs.ptr_glConvolutionFilter2D = try_find_sym(opengl, "glConvolutionFilter2D");
    stub_funcs.ptr_glConvolutionParameterf = try_find_sym(opengl, "glConvolutionParameterf");
    stub_funcs.ptr_glConvolutionParameterfv = try_find_sym(opengl, "glConvolutionParameterfv");
    stub_funcs.ptr_glConvolutionParameteri = try_find_sym(opengl, "glConvolutionParameteri");
    stub_funcs.ptr_glConvolutionParameteriv = try_find_sym(opengl, "glConvolutionParameteriv");
    stub_funcs.ptr_glCopyConvolutionFilter1D = try_find_sym(opengl, "glCopyConvolutionFilter1D");
    stub_funcs.ptr_glCopyConvolutionFilter2D = try_find_sym(opengl, "glCopyConvolutionFilter2D");
    stub_funcs.ptr_glGetConvolutionFilter = try_find_sym(opengl, "glGetConvolutionFilter");
    stub_funcs.ptr_glGetConvolutionParameterfv = try_find_sym(opengl, "glGetConvolutionParameterfv");
    stub_funcs.ptr_glGetConvolutionParameteriv = try_find_sym(opengl, "glGetConvolutionParameteriv");
    stub_funcs.ptr_glSeparableFilter2D = try_find_sym(opengl, "glSeparableFilter2D");
    stub_funcs.ptr_glGetSeparableFilter = try_find_sym(opengl, "glGetSeparableFilter");
    stub_funcs.ptr_glActiveTexture = try_find_sym(opengl, "glActiveTexture");
    stub_funcs.ptr_glClientActiveTexture = try_find_sym(opengl, "glClientActiveTexture");
    stub_funcs.ptr_glCompressedTexImage1D = try_find_sym(opengl, "glCompressedTexImage1D");
    stub_funcs.ptr_glCompressedTexImage2D = try_find_sym(opengl, "glCompressedTexImage2D");
    stub_funcs.ptr_glCompressedTexImage3D = try_find_sym(opengl, "glCompressedTexImage3D");
    stub_funcs.ptr_glCompressedTexSubImage1D = try_find_sym(opengl, "glCompressedTexSubImage1D");
    stub_funcs.ptr_glCompressedTexSubImage2D = try_find_sym(opengl, "glCompressedTexSubImage2D");
    stub_funcs.ptr_glCompressedTexSubImage3D = try_find_sym(opengl, "glCompressedTexSubImage3D");
    stub_funcs.ptr_glGetCompressedTexImage = try_find_sym(opengl, "glGetCompressedTexImage");
    stub_funcs.ptr_glMultiTexCoord1d = try_find_sym(opengl, "glMultiTexCoord1d");
    stub_funcs.ptr_glMultiTexCoord1dv = try_find_sym(opengl, "glMultiTexCoord1dv");
    stub_funcs.ptr_glMultiTexCoord1f = try_find_sym(opengl, "glMultiTexCoord1f");
    stub_funcs.ptr_glMultiTexCoord1fv = try_find_sym(opengl, "glMultiTexCoord1fv");
    stub_funcs.ptr_glMultiTexCoord1i = try_find_sym(opengl, "glMultiTexCoord1i");
    stub_funcs.ptr_glMultiTexCoord1iv = try_find_sym(opengl, "glMultiTexCoord1iv");
    stub_funcs.ptr_glMultiTexCoord1s = try_find_sym(opengl, "glMultiTexCoord1s");
    stub_funcs.ptr_glMultiTexCoord1sv = try_find_sym(opengl, "glMultiTexCoord1sv");
    stub_funcs.ptr_glMultiTexCoord2d = try_find_sym(opengl, "glMultiTexCoord2d");
    stub_funcs.ptr_glMultiTexCoord2dv = try_find_sym(opengl, "glMultiTexCoord2dv");
    stub_funcs.ptr_glMultiTexCoord2f = try_find_sym(opengl, "glMultiTexCoord2f");
    stub_funcs.ptr_glMultiTexCoord2fv = try_find_sym(opengl, "glMultiTexCoord2fv");
    stub_funcs.ptr_glMultiTexCoord2i = try_find_sym(opengl, "glMultiTexCoord2i");
    stub_funcs.ptr_glMultiTexCoord2iv = try_find_sym(opengl, "glMultiTexCoord2iv");
    stub_funcs.ptr_glMultiTexCoord2s = try_find_sym(opengl, "glMultiTexCoord2s");
    stub_funcs.ptr_glMultiTexCoord2sv = try_find_sym(opengl, "glMultiTexCoord2sv");
    stub_funcs.ptr_glMultiTexCoord3d = try_find_sym(opengl, "glMultiTexCoord3d");
    stub_funcs.ptr_glMultiTexCoord3dv = try_find_sym(opengl, "glMultiTexCoord3dv");
    stub_funcs.ptr_glMultiTexCoord3f = try_find_sym(opengl, "glMultiTexCoord3f");
    stub_funcs.ptr_glMultiTexCoord3fv = try_find_sym(opengl, "glMultiTexCoord3fv");
    stub_funcs.ptr_glMultiTexCoord3i = try_find_sym(opengl, "glMultiTexCoord3i");
    stub_funcs.ptr_glMultiTexCoord3iv = try_find_sym(opengl, "glMultiTexCoord3iv");
    stub_funcs.ptr_glMultiTexCoord3s = try_find_sym(opengl, "glMultiTexCoord3s");
    stub_funcs.ptr_glMultiTexCoord3sv = try_find_sym(opengl, "glMultiTexCoord3sv");
    stub_funcs.ptr_glMultiTexCoord4d = try_find_sym(opengl, "glMultiTexCoord4d");
    stub_funcs.ptr_glMultiTexCoord4dv = try_find_sym(opengl, "glMultiTexCoord4dv");
    stub_funcs.ptr_glMultiTexCoord4f = try_find_sym(opengl, "glMultiTexCoord4f");
    stub_funcs.ptr_glMultiTexCoord4fv = try_find_sym(opengl, "glMultiTexCoord4fv");
    stub_funcs.ptr_glMultiTexCoord4i = try_find_sym(opengl, "glMultiTexCoord4i");
    stub_funcs.ptr_glMultiTexCoord4iv = try_find_sym(opengl, "glMultiTexCoord4iv");
    stub_funcs.ptr_glMultiTexCoord4s = try_find_sym(opengl, "glMultiTexCoord4s");
    stub_funcs.ptr_glMultiTexCoord4sv = try_find_sym(opengl, "glMultiTexCoord4sv");
    stub_funcs.ptr_glLoadTransposeMatrixd = try_find_sym(opengl, "glLoadTransposeMatrixd");
    stub_funcs.ptr_glLoadTransposeMatrixf = try_find_sym(opengl, "glLoadTransposeMatrixf");
    stub_funcs.ptr_glMultTransposeMatrixd = try_find_sym(opengl, "glMultTransposeMatrixd");
    stub_funcs.ptr_glMultTransposeMatrixf = try_find_sym(opengl, "glMultTransposeMatrixf");
    stub_funcs.ptr_glSampleCoverage = try_find_sym(opengl, "glSampleCoverage");
    stub_funcs.ptr_glActiveTextureARB = try_find_sym(opengl, "glActiveTextureARB");
    stub_funcs.ptr_glClientActiveTextureARB = try_find_sym(opengl, "glClientActiveTextureARB");
    stub_funcs.ptr_glMultiTexCoord1dARB = try_find_sym(opengl, "glMultiTexCoord1dARB");
    stub_funcs.ptr_glMultiTexCoord1dvARB = try_find_sym(opengl, "glMultiTexCoord1dvARB");
    stub_funcs.ptr_glMultiTexCoord1fARB = try_find_sym(opengl, "glMultiTexCoord1fARB");
    stub_funcs.ptr_glMultiTexCoord1fvARB = try_find_sym(opengl, "glMultiTexCoord1fvARB");
    stub_funcs.ptr_glMultiTexCoord1iARB = try_find_sym(opengl, "glMultiTexCoord1iARB");
    stub_funcs.ptr_glMultiTexCoord1ivARB = try_find_sym(opengl, "glMultiTexCoord1ivARB");
    stub_funcs.ptr_glMultiTexCoord1sARB = try_find_sym(opengl, "glMultiTexCoord1sARB");
    stub_funcs.ptr_glMultiTexCoord1svARB = try_find_sym(opengl, "glMultiTexCoord1svARB");
    stub_funcs.ptr_glMultiTexCoord2dARB = try_find_sym(opengl, "glMultiTexCoord2dARB");
    stub_funcs.ptr_glMultiTexCoord2dvARB = try_find_sym(opengl, "glMultiTexCoord2dvARB");
    stub_funcs.ptr_glMultiTexCoord2fARB = try_find_sym(opengl, "glMultiTexCoord2fARB");
    stub_funcs.ptr_glMultiTexCoord2fvARB = try_find_sym(opengl, "glMultiTexCoord2fvARB");
    stub_funcs.ptr_glMultiTexCoord2iARB = try_find_sym(opengl, "glMultiTexCoord2iARB");
    stub_funcs.ptr_glMultiTexCoord2ivARB = try_find_sym(opengl, "glMultiTexCoord2ivARB");
    stub_funcs.ptr_glMultiTexCoord2sARB = try_find_sym(opengl, "glMultiTexCoord2sARB");
    stub_funcs.ptr_glMultiTexCoord2svARB = try_find_sym(opengl, "glMultiTexCoord2svARB");
    stub_funcs.ptr_glMultiTexCoord3dARB = try_find_sym(opengl, "glMultiTexCoord3dARB");
    stub_funcs.ptr_glMultiTexCoord3dvARB = try_find_sym(opengl, "glMultiTexCoord3dvARB");
    stub_funcs.ptr_glMultiTexCoord3fARB = try_find_sym(opengl, "glMultiTexCoord3fARB");
    stub_funcs.ptr_glMultiTexCoord3fvARB = try_find_sym(opengl, "glMultiTexCoord3fvARB");
    stub_funcs.ptr_glMultiTexCoord3iARB = try_find_sym(opengl, "glMultiTexCoord3iARB");
    stub_funcs.ptr_glMultiTexCoord3ivARB = try_find_sym(opengl, "glMultiTexCoord3ivARB");
    stub_funcs.ptr_glMultiTexCoord3sARB = try_find_sym(opengl, "glMultiTexCoord3sARB");
    stub_funcs.ptr_glMultiTexCoord3svARB = try_find_sym(opengl, "glMultiTexCoord3svARB");
    stub_funcs.ptr_glMultiTexCoord4dARB = try_find_sym(opengl, "glMultiTexCoord4dARB");
    stub_funcs.ptr_glMultiTexCoord4dvARB = try_find_sym(opengl, "glMultiTexCoord4dvARB");
    stub_funcs.ptr_glMultiTexCoord4fARB = try_find_sym(opengl, "glMultiTexCoord4fARB");
    stub_funcs.ptr_glMultiTexCoord4fvARB = try_find_sym(opengl, "glMultiTexCoord4fvARB");
    stub_funcs.ptr_glMultiTexCoord4iARB = try_find_sym(opengl, "glMultiTexCoord4iARB");
    stub_funcs.ptr_glMultiTexCoord4ivARB = try_find_sym(opengl, "glMultiTexCoord4ivARB");
    stub_funcs.ptr_glMultiTexCoord4sARB = try_find_sym(opengl, "glMultiTexCoord4sARB");
    stub_funcs.ptr_glMultiTexCoord4svARB = try_find_sym(opengl, "glMultiTexCoord4svARB");
    stub_funcs.ptr_glBlendEquationSeparateATI = try_find_sym(opengl, "glBlendEquationSeparateATI");
    stub_funcs.ptr_glXChooseVisual = try_find_sym(opengl, "glXChooseVisual");
    stub_funcs.ptr_glXCreateContext = try_find_sym(opengl, "glXCreateContext");
    stub_funcs.ptr_glXDestroyContext = try_find_sym(opengl, "glXDestroyContext");
    stub_funcs.ptr_glXMakeCurrent = try_find_sym(opengl, "glXMakeCurrent");
    stub_funcs.ptr_glXCopyContext = try_find_sym(opengl, "glXCopyContext");
    stub_funcs.ptr_glXSwapBuffers = try_find_sym(opengl, "glXSwapBuffers");
    stub_funcs.ptr_glXCreateGLXPixmap = try_find_sym(opengl, "glXCreateGLXPixmap");
    stub_funcs.ptr_glXDestroyGLXPixmap = try_find_sym(opengl, "glXDestroyGLXPixmap");
    stub_funcs.ptr_glXQueryExtension = try_find_sym(opengl, "glXQueryExtension");
    stub_funcs.ptr_glXQueryVersion = try_find_sym(opengl, "glXQueryVersion");
    stub_funcs.ptr_glXIsDirect = try_find_sym(opengl, "glXIsDirect");
    stub_funcs.ptr_glXGetConfig = try_find_sym(opengl, "glXGetConfig");
    stub_funcs.ptr_glXGetCurrentContext = try_find_sym(opengl, "glXGetCurrentContext");
    stub_funcs.ptr_glXGetCurrentDrawable = try_find_sym(opengl, "glXGetCurrentDrawable");
    stub_funcs.ptr_glXWaitGL = try_find_sym(opengl, "glXWaitGL");
    stub_funcs.ptr_glXWaitX = try_find_sym(opengl, "glXWaitX");
    stub_funcs.ptr_glXUseXFont = try_find_sym(opengl, "glXUseXFont");
    stub_funcs.ptr_glXQueryExtensionsString = try_find_sym(opengl, "glXQueryExtensionsString");
    stub_funcs.ptr_glXQueryServerString = try_find_sym(opengl, "glXQueryServerString");
    stub_funcs.ptr_glXGetClientString = try_find_sym(opengl, "glXGetClientString");
    stub_funcs.ptr_glXGetCurrentDisplay = try_find_sym(opengl, "glXGetCurrentDisplay");
    stub_funcs.ptr_glXChooseFBConfig = try_find_sym(opengl, "glXChooseFBConfig");
    stub_funcs.ptr_glXGetFBConfigAttrib = try_find_sym(opengl, "glXGetFBConfigAttrib");
    stub_funcs.ptr_glXGetFBConfigs = try_find_sym(opengl, "glXGetFBConfigs");
    stub_funcs.ptr_glXGetVisualFromFBConfig = try_find_sym(opengl, "glXGetVisualFromFBConfig");
    stub_funcs.ptr_glXCreateWindow = try_find_sym(opengl, "glXCreateWindow");
    stub_funcs.ptr_glXDestroyWindow = try_find_sym(opengl, "glXDestroyWindow");
    stub_funcs.ptr_glXCreatePixmap = try_find_sym(opengl, "glXCreatePixmap");
    stub_funcs.ptr_glXDestroyPixmap = try_find_sym(opengl, "glXDestroyPixmap");
    stub_funcs.ptr_glXCreatePbuffer = try_find_sym(opengl, "glXCreatePbuffer");
    stub_funcs.ptr_glXDestroyPbuffer = try_find_sym(opengl, "glXDestroyPbuffer");
    stub_funcs.ptr_glXQueryDrawable = try_find_sym(opengl, "glXQueryDrawable");
    stub_funcs.ptr_glXCreateNewContext = try_find_sym(opengl, "glXCreateNewContext");
    stub_funcs.ptr_glXMakeContextCurrent = try_find_sym(opengl, "glXMakeContextCurrent");
    stub_funcs.ptr_glXGetCurrentReadDrawable = try_find_sym(opengl, "glXGetCurrentReadDrawable");
    stub_funcs.ptr_glXQueryContext = try_find_sym(opengl, "glXQueryContext");
    stub_funcs.ptr_glXSelectEvent = try_find_sym(opengl, "glXSelectEvent");
    stub_funcs.ptr_glXGetSelectedEvent = try_find_sym(opengl, "glXGetSelectedEvent");
    stub_funcs.ptr_glXGetProcAddressARB = try_find_sym(opengl, "glXGetProcAddressARB");
    stub_funcs.ptr_glXGetProcAddress = try_find_sym(opengl, "glXGetProcAddress");
    stub_funcs.ptr_glXAllocateMemoryNV = try_find_sym(opengl, "glXAllocateMemoryNV");
    stub_funcs.ptr_glXFreeMemoryNV = try_find_sym(opengl, "glXFreeMemoryNV");
    stub_funcs.ptr_glXBindTexImageARB = try_find_sym(opengl, "glXBindTexImageARB");
    stub_funcs.ptr_glXReleaseTexImageARB = try_find_sym(opengl, "glXReleaseTexImageARB");
    stub_funcs.ptr_glXDrawableAttribARB = try_find_sym(opengl, "glXDrawableAttribARB");
    stub_funcs.ptr_glXGetFrameUsageMESA = try_find_sym(opengl, "glXGetFrameUsageMESA");
    stub_funcs.ptr_glXBeginFrameTrackingMESA = try_find_sym(opengl, "glXBeginFrameTrackingMESA");
    stub_funcs.ptr_glXEndFrameTrackingMESA = try_find_sym(opengl, "glXEndFrameTrackingMESA");
    stub_funcs.ptr_glXQueryFrameTrackingMESA = try_find_sym(opengl, "glXQueryFrameTrackingMESA");
    stub_funcs.ptr_ms_glClearIndex = try_find_sym(opengl, "glClearIndex");
    stub_funcs.ptr_ms_glClearColor = try_find_sym(opengl, "glClearColor");
    stub_funcs.ptr_ms_glClear = try_find_sym(opengl, "glClear");
    stub_funcs.ptr_ms_glIndexMask = try_find_sym(opengl, "glIndexMask");
    stub_funcs.ptr_ms_glColorMask = try_find_sym(opengl, "glColorMask");
    stub_funcs.ptr_ms_glAlphaFunc = try_find_sym(opengl, "glAlphaFunc");
    stub_funcs.ptr_ms_glBlendFunc = try_find_sym(opengl, "glBlendFunc");
    stub_funcs.ptr_ms_glLogicOp = try_find_sym(opengl, "glLogicOp");
    stub_funcs.ptr_ms_glCullFace = try_find_sym(opengl, "glCullFace");
    stub_funcs.ptr_ms_glFrontFace = try_find_sym(opengl, "glFrontFace");
    stub_funcs.ptr_ms_glPointSize = try_find_sym(opengl, "glPointSize");
    stub_funcs.ptr_ms_glLineWidth = try_find_sym(opengl, "glLineWidth");
    stub_funcs.ptr_ms_glLineStipple = try_find_sym(opengl, "glLineStipple");
    stub_funcs.ptr_ms_glPolygonMode = try_find_sym(opengl, "glPolygonMode");
    stub_funcs.ptr_ms_glPolygonOffset = try_find_sym(opengl, "glPolygonOffset");
    stub_funcs.ptr_ms_glPolygonStipple = try_find_sym(opengl, "glPolygonStipple");
    stub_funcs.ptr_ms_glGetPolygonStipple = try_find_sym(opengl, "glGetPolygonStipple");
    stub_funcs.ptr_ms_glEdgeFlag = try_find_sym(opengl, "glEdgeFlag");
    stub_funcs.ptr_ms_glEdgeFlagv = try_find_sym(opengl, "glEdgeFlagv");
    stub_funcs.ptr_ms_glScissor = try_find_sym(opengl, "glScissor");
    stub_funcs.ptr_ms_glClipPlane = try_find_sym(opengl, "glClipPlane");
    stub_funcs.ptr_ms_glGetClipPlane = try_find_sym(opengl, "glGetClipPlane");
    stub_funcs.ptr_ms_glDrawBuffer = try_find_sym(opengl, "glDrawBuffer");
    stub_funcs.ptr_ms_glReadBuffer = try_find_sym(opengl, "glReadBuffer");
    stub_funcs.ptr_ms_glEnable = try_find_sym(opengl, "glEnable");
    stub_funcs.ptr_ms_glDisable = try_find_sym(opengl, "glDisable");
    stub_funcs.ptr_ms_glIsEnabled = try_find_sym(opengl, "glIsEnabled");
    stub_funcs.ptr_ms_glEnableClientState = try_find_sym(opengl, "glEnableClientState");
    stub_funcs.ptr_ms_glDisableClientState = try_find_sym(opengl, "glDisableClientState");
    stub_funcs.ptr_ms_glGetBooleanv = try_find_sym(opengl, "glGetBooleanv");
    stub_funcs.ptr_ms_glGetDoublev = try_find_sym(opengl, "glGetDoublev");
    stub_funcs.ptr_ms_glGetFloatv = try_find_sym(opengl, "glGetFloatv");
    stub_funcs.ptr_ms_glGetIntegerv = try_find_sym(opengl, "glGetIntegerv");
    stub_funcs.ptr_ms_glPushAttrib = try_find_sym(opengl, "glPushAttrib");
    stub_funcs.ptr_ms_glPopAttrib = try_find_sym(opengl, "glPopAttrib");
    stub_funcs.ptr_ms_glPushClientAttrib = try_find_sym(opengl, "glPushClientAttrib");
    stub_funcs.ptr_ms_glPopClientAttrib = try_find_sym(opengl, "glPopClientAttrib");
    stub_funcs.ptr_ms_glRenderMode = try_find_sym(opengl, "glRenderMode");
    stub_funcs.ptr_ms_glGetError = try_find_sym(opengl, "glGetError");
    stub_funcs.ptr_ms_glGetString = try_find_sym(opengl, "glGetString");
    stub_funcs.ptr_ms_glFinish = try_find_sym(opengl, "glFinish");
    stub_funcs.ptr_ms_glFlush = try_find_sym(opengl, "glFlush");
    stub_funcs.ptr_ms_glHint = try_find_sym(opengl, "glHint");
    stub_funcs.ptr_ms_glClearDepth = try_find_sym(opengl, "glClearDepth");
    stub_funcs.ptr_ms_glDepthFunc = try_find_sym(opengl, "glDepthFunc");
    stub_funcs.ptr_ms_glDepthMask = try_find_sym(opengl, "glDepthMask");
    stub_funcs.ptr_ms_glDepthRange = try_find_sym(opengl, "glDepthRange");
    stub_funcs.ptr_ms_glClearAccum = try_find_sym(opengl, "glClearAccum");
    stub_funcs.ptr_ms_glAccum = try_find_sym(opengl, "glAccum");
    stub_funcs.ptr_ms_glMatrixMode = try_find_sym(opengl, "glMatrixMode");
    stub_funcs.ptr_ms_glOrtho = try_find_sym(opengl, "glOrtho");
    stub_funcs.ptr_ms_glFrustum = try_find_sym(opengl, "glFrustum");
    stub_funcs.ptr_ms_glViewport = try_find_sym(opengl, "glViewport");
    stub_funcs.ptr_ms_glPushMatrix = try_find_sym(opengl, "glPushMatrix");
    stub_funcs.ptr_ms_glPopMatrix = try_find_sym(opengl, "glPopMatrix");
    stub_funcs.ptr_ms_glLoadIdentity = try_find_sym(opengl, "glLoadIdentity");
    stub_funcs.ptr_ms_glLoadMatrixd = try_find_sym(opengl, "glLoadMatrixd");
    stub_funcs.ptr_ms_glLoadMatrixf = try_find_sym(opengl, "glLoadMatrixf");
    stub_funcs.ptr_ms_glMultMatrixd = try_find_sym(opengl, "glMultMatrixd");
    stub_funcs.ptr_ms_glMultMatrixf = try_find_sym(opengl, "glMultMatrixf");
    stub_funcs.ptr_ms_glRotated = try_find_sym(opengl, "glRotated");
    stub_funcs.ptr_ms_glRotatef = try_find_sym(opengl, "glRotatef");
    stub_funcs.ptr_ms_glScaled = try_find_sym(opengl, "glScaled");
    stub_funcs.ptr_ms_glScalef = try_find_sym(opengl, "glScalef");
    stub_funcs.ptr_ms_glTranslated = try_find_sym(opengl, "glTranslated");
    stub_funcs.ptr_ms_glTranslatef = try_find_sym(opengl, "glTranslatef");
    stub_funcs.ptr_ms_glIsList = try_find_sym(opengl, "glIsList");
    stub_funcs.ptr_ms_glDeleteLists = try_find_sym(opengl, "glDeleteLists");
    stub_funcs.ptr_ms_glGenLists = try_find_sym(opengl, "glGenLists");
    stub_funcs.ptr_ms_glNewList = try_find_sym(opengl, "glNewList");
    stub_funcs.ptr_ms_glEndList = try_find_sym(opengl, "glEndList");
    stub_funcs.ptr_ms_glCallList = try_find_sym(opengl, "glCallList");
    stub_funcs.ptr_ms_glCallLists = try_find_sym(opengl, "glCallLists");
    stub_funcs.ptr_ms_glListBase = try_find_sym(opengl, "glListBase");
    stub_funcs.ptr_ms_glBegin = try_find_sym(opengl, "glBegin");
    stub_funcs.ptr_ms_glEnd = try_find_sym(opengl, "glEnd");
    stub_funcs.ptr_ms_glVertex2d = try_find_sym(opengl, "glVertex2d");
    stub_funcs.ptr_ms_glVertex2f = try_find_sym(opengl, "glVertex2f");
    stub_funcs.ptr_ms_glVertex2i = try_find_sym(opengl, "glVertex2i");
    stub_funcs.ptr_ms_glVertex2s = try_find_sym(opengl, "glVertex2s");
    stub_funcs.ptr_ms_glVertex3d = try_find_sym(opengl, "glVertex3d");
    stub_funcs.ptr_ms_glVertex3f = try_find_sym(opengl, "glVertex3f");
    stub_funcs.ptr_ms_glVertex3i = try_find_sym(opengl, "glVertex3i");
    stub_funcs.ptr_ms_glVertex3s = try_find_sym(opengl, "glVertex3s");
    stub_funcs.ptr_ms_glVertex4d = try_find_sym(opengl, "glVertex4d");
    stub_funcs.ptr_ms_glVertex4f = try_find_sym(opengl, "glVertex4f");
    stub_funcs.ptr_ms_glVertex4i = try_find_sym(opengl, "glVertex4i");
    stub_funcs.ptr_ms_glVertex4s = try_find_sym(opengl, "glVertex4s");
    stub_funcs.ptr_ms_glVertex2dv = try_find_sym(opengl, "glVertex2dv");
    stub_funcs.ptr_ms_glVertex2fv = try_find_sym(opengl, "glVertex2fv");
    stub_funcs.ptr_ms_glVertex2iv = try_find_sym(opengl, "glVertex2iv");
    stub_funcs.ptr_ms_glVertex2sv = try_find_sym(opengl, "glVertex2sv");
    stub_funcs.ptr_ms_glVertex3dv = try_find_sym(opengl, "glVertex3dv");
    stub_funcs.ptr_ms_glVertex3fv = try_find_sym(opengl, "glVertex3fv");
    stub_funcs.ptr_ms_glVertex3iv = try_find_sym(opengl, "glVertex3iv");
    stub_funcs.ptr_ms_glVertex3sv = try_find_sym(opengl, "glVertex3sv");
    stub_funcs.ptr_ms_glVertex4dv = try_find_sym(opengl, "glVertex4dv");
    stub_funcs.ptr_ms_glVertex4fv = try_find_sym(opengl, "glVertex4fv");
    stub_funcs.ptr_ms_glVertex4iv = try_find_sym(opengl, "glVertex4iv");
    stub_funcs.ptr_ms_glVertex4sv = try_find_sym(opengl, "glVertex4sv");
    stub_funcs.ptr_ms_glNormal3b = try_find_sym(opengl, "glNormal3b");
    stub_funcs.ptr_ms_glNormal3d = try_find_sym(opengl, "glNormal3d");
    stub_funcs.ptr_ms_glNormal3f = try_find_sym(opengl, "glNormal3f");
    stub_funcs.ptr_ms_glNormal3i = try_find_sym(opengl, "glNormal3i");
    stub_funcs.ptr_ms_glNormal3s = try_find_sym(opengl, "glNormal3s");
    stub_funcs.ptr_ms_glNormal3bv = try_find_sym(opengl, "glNormal3bv");
    stub_funcs.ptr_ms_glNormal3dv = try_find_sym(opengl, "glNormal3dv");
    stub_funcs.ptr_ms_glNormal3fv = try_find_sym(opengl, "glNormal3fv");
    stub_funcs.ptr_ms_glNormal3iv = try_find_sym(opengl, "glNormal3iv");
    stub_funcs.ptr_ms_glNormal3sv = try_find_sym(opengl, "glNormal3sv");
    stub_funcs.ptr_ms_glIndexd = try_find_sym(opengl, "glIndexd");
    stub_funcs.ptr_ms_glIndexf = try_find_sym(opengl, "glIndexf");
    stub_funcs.ptr_ms_glIndexi = try_find_sym(opengl, "glIndexi");
    stub_funcs.ptr_ms_glIndexs = try_find_sym(opengl, "glIndexs");
    stub_funcs.ptr_ms_glIndexub = try_find_sym(opengl, "glIndexub");
    stub_funcs.ptr_ms_glIndexdv = try_find_sym(opengl, "glIndexdv");
    stub_funcs.ptr_ms_glIndexfv = try_find_sym(opengl, "glIndexfv");
    stub_funcs.ptr_ms_glIndexiv = try_find_sym(opengl, "glIndexiv");
    stub_funcs.ptr_ms_glIndexsv = try_find_sym(opengl, "glIndexsv");
    stub_funcs.ptr_ms_glIndexubv = try_find_sym(opengl, "glIndexubv");
    stub_funcs.ptr_ms_glColor3b = try_find_sym(opengl, "glColor3b");
    stub_funcs.ptr_ms_glColor3d = try_find_sym(opengl, "glColor3d");
    stub_funcs.ptr_ms_glColor3f = try_find_sym(opengl, "glColor3f");
    stub_funcs.ptr_ms_glColor3i = try_find_sym(opengl, "glColor3i");
    stub_funcs.ptr_ms_glColor3s = try_find_sym(opengl, "glColor3s");
    stub_funcs.ptr_ms_glColor3ub = try_find_sym(opengl, "glColor3ub");
    stub_funcs.ptr_ms_glColor3ui = try_find_sym(opengl, "glColor3ui");
    stub_funcs.ptr_ms_glColor3us = try_find_sym(opengl, "glColor3us");
    stub_funcs.ptr_ms_glColor4b = try_find_sym(opengl, "glColor4b");
    stub_funcs.ptr_ms_glColor4d = try_find_sym(opengl, "glColor4d");
    stub_funcs.ptr_ms_glColor4f = try_find_sym(opengl, "glColor4f");
    stub_funcs.ptr_ms_glColor4i = try_find_sym(opengl, "glColor4i");
    stub_funcs.ptr_ms_glColor4s = try_find_sym(opengl, "glColor4s");
    stub_funcs.ptr_ms_glColor4ub = try_find_sym(opengl, "glColor4ub");
    stub_funcs.ptr_ms_glColor4ui = try_find_sym(opengl, "glColor4ui");
    stub_funcs.ptr_ms_glColor4us = try_find_sym(opengl, "glColor4us");
    stub_funcs.ptr_ms_glColor3bv = try_find_sym(opengl, "glColor3bv");
    stub_funcs.ptr_ms_glColor3dv = try_find_sym(opengl, "glColor3dv");
    stub_funcs.ptr_ms_glColor3fv = try_find_sym(opengl, "glColor3fv");
    stub_funcs.ptr_ms_glColor3iv = try_find_sym(opengl, "glColor3iv");
    stub_funcs.ptr_ms_glColor3sv = try_find_sym(opengl, "glColor3sv");
    stub_funcs.ptr_ms_glColor3ubv = try_find_sym(opengl, "glColor3ubv");
    stub_funcs.ptr_ms_glColor3uiv = try_find_sym(opengl, "glColor3uiv");
    stub_funcs.ptr_ms_glColor3usv = try_find_sym(opengl, "glColor3usv");
    stub_funcs.ptr_ms_glColor4bv = try_find_sym(opengl, "glColor4bv");
    stub_funcs.ptr_ms_glColor4dv = try_find_sym(opengl, "glColor4dv");
    stub_funcs.ptr_ms_glColor4fv = try_find_sym(opengl, "glColor4fv");
    stub_funcs.ptr_ms_glColor4iv = try_find_sym(opengl, "glColor4iv");
    stub_funcs.ptr_ms_glColor4sv = try_find_sym(opengl, "glColor4sv");
    stub_funcs.ptr_ms_glColor4ubv = try_find_sym(opengl, "glColor4ubv");
    stub_funcs.ptr_ms_glColor4uiv = try_find_sym(opengl, "glColor4uiv");
    stub_funcs.ptr_ms_glColor4usv = try_find_sym(opengl, "glColor4usv");
    stub_funcs.ptr_ms_glTexCoord1d = try_find_sym(opengl, "glTexCoord1d");
    stub_funcs.ptr_ms_glTexCoord1f = try_find_sym(opengl, "glTexCoord1f");
    stub_funcs.ptr_ms_glTexCoord1i = try_find_sym(opengl, "glTexCoord1i");
    stub_funcs.ptr_ms_glTexCoord1s = try_find_sym(opengl, "glTexCoord1s");
    stub_funcs.ptr_ms_glTexCoord2d = try_find_sym(opengl, "glTexCoord2d");
    stub_funcs.ptr_ms_glTexCoord2f = try_find_sym(opengl, "glTexCoord2f");
    stub_funcs.ptr_ms_glTexCoord2i = try_find_sym(opengl, "glTexCoord2i");
    stub_funcs.ptr_ms_glTexCoord2s = try_find_sym(opengl, "glTexCoord2s");
    stub_funcs.ptr_ms_glTexCoord3d = try_find_sym(opengl, "glTexCoord3d");
    stub_funcs.ptr_ms_glTexCoord3f = try_find_sym(opengl, "glTexCoord3f");
    stub_funcs.ptr_ms_glTexCoord3i = try_find_sym(opengl, "glTexCoord3i");
    stub_funcs.ptr_ms_glTexCoord3s = try_find_sym(opengl, "glTexCoord3s");
    stub_funcs.ptr_ms_glTexCoord4d = try_find_sym(opengl, "glTexCoord4d");
    stub_funcs.ptr_ms_glTexCoord4f = try_find_sym(opengl, "glTexCoord4f");
    stub_funcs.ptr_ms_glTexCoord4i = try_find_sym(opengl, "glTexCoord4i");
    stub_funcs.ptr_ms_glTexCoord4s = try_find_sym(opengl, "glTexCoord4s");
    stub_funcs.ptr_ms_glTexCoord1dv = try_find_sym(opengl, "glTexCoord1dv");
    stub_funcs.ptr_ms_glTexCoord1fv = try_find_sym(opengl, "glTexCoord1fv");
    stub_funcs.ptr_ms_glTexCoord1iv = try_find_sym(opengl, "glTexCoord1iv");
    stub_funcs.ptr_ms_glTexCoord1sv = try_find_sym(opengl, "glTexCoord1sv");
    stub_funcs.ptr_ms_glTexCoord2dv = try_find_sym(opengl, "glTexCoord2dv");
    stub_funcs.ptr_ms_glTexCoord2fv = try_find_sym(opengl, "glTexCoord2fv");
    stub_funcs.ptr_ms_glTexCoord2iv = try_find_sym(opengl, "glTexCoord2iv");
    stub_funcs.ptr_ms_glTexCoord2sv = try_find_sym(opengl, "glTexCoord2sv");
    stub_funcs.ptr_ms_glTexCoord3dv = try_find_sym(opengl, "glTexCoord3dv");
    stub_funcs.ptr_ms_glTexCoord3fv = try_find_sym(opengl, "glTexCoord3fv");
    stub_funcs.ptr_ms_glTexCoord3iv = try_find_sym(opengl, "glTexCoord3iv");
    stub_funcs.ptr_ms_glTexCoord3sv = try_find_sym(opengl, "glTexCoord3sv");
    stub_funcs.ptr_ms_glTexCoord4dv = try_find_sym(opengl, "glTexCoord4dv");
    stub_funcs.ptr_ms_glTexCoord4fv = try_find_sym(opengl, "glTexCoord4fv");
    stub_funcs.ptr_ms_glTexCoord4iv = try_find_sym(opengl, "glTexCoord4iv");
    stub_funcs.ptr_ms_glTexCoord4sv = try_find_sym(opengl, "glTexCoord4sv");
    stub_funcs.ptr_ms_glRasterPos2d = try_find_sym(opengl, "glRasterPos2d");
    stub_funcs.ptr_ms_glRasterPos2f = try_find_sym(opengl, "glRasterPos2f");
    stub_funcs.ptr_ms_glRasterPos2i = try_find_sym(opengl, "glRasterPos2i");
    stub_funcs.ptr_ms_glRasterPos2s = try_find_sym(opengl, "glRasterPos2s");
    stub_funcs.ptr_ms_glRasterPos3d = try_find_sym(opengl, "glRasterPos3d");
    stub_funcs.ptr_ms_glRasterPos3f = try_find_sym(opengl, "glRasterPos3f");
    stub_funcs.ptr_ms_glRasterPos3i = try_find_sym(opengl, "glRasterPos3i");
    stub_funcs.ptr_ms_glRasterPos3s = try_find_sym(opengl, "glRasterPos3s");
    stub_funcs.ptr_ms_glRasterPos4d = try_find_sym(opengl, "glRasterPos4d");
    stub_funcs.ptr_ms_glRasterPos4f = try_find_sym(opengl, "glRasterPos4f");
    stub_funcs.ptr_ms_glRasterPos4i = try_find_sym(opengl, "glRasterPos4i");
    stub_funcs.ptr_ms_glRasterPos4s = try_find_sym(opengl, "glRasterPos4s");
    stub_funcs.ptr_ms_glRasterPos2dv = try_find_sym(opengl, "glRasterPos2dv");
    stub_funcs.ptr_ms_glRasterPos2fv = try_find_sym(opengl, "glRasterPos2fv");
    stub_funcs.ptr_ms_glRasterPos2iv = try_find_sym(opengl, "glRasterPos2iv");
    stub_funcs.ptr_ms_glRasterPos2sv = try_find_sym(opengl, "glRasterPos2sv");
    stub_funcs.ptr_ms_glRasterPos3dv = try_find_sym(opengl, "glRasterPos3dv");
    stub_funcs.ptr_ms_glRasterPos3fv = try_find_sym(opengl, "glRasterPos3fv");
    stub_funcs.ptr_ms_glRasterPos3iv = try_find_sym(opengl, "glRasterPos3iv");
    stub_funcs.ptr_ms_glRasterPos3sv = try_find_sym(opengl, "glRasterPos3sv");
    stub_funcs.ptr_ms_glRasterPos4dv = try_find_sym(opengl, "glRasterPos4dv");
    stub_funcs.ptr_ms_glRasterPos4fv = try_find_sym(opengl, "glRasterPos4fv");
    stub_funcs.ptr_ms_glRasterPos4iv = try_find_sym(opengl, "glRasterPos4iv");
    stub_funcs.ptr_ms_glRasterPos4sv = try_find_sym(opengl, "glRasterPos4sv");
    stub_funcs.ptr_ms_glRectd = try_find_sym(opengl, "glRectd");
    stub_funcs.ptr_ms_glRectf = try_find_sym(opengl, "glRectf");
    stub_funcs.ptr_ms_glRecti = try_find_sym(opengl, "glRecti");
    stub_funcs.ptr_ms_glRects = try_find_sym(opengl, "glRects");
    stub_funcs.ptr_ms_glRectdv = try_find_sym(opengl, "glRectdv");
    stub_funcs.ptr_ms_glRectfv = try_find_sym(opengl, "glRectfv");
    stub_funcs.ptr_ms_glRectiv = try_find_sym(opengl, "glRectiv");
    stub_funcs.ptr_ms_glRectsv = try_find_sym(opengl, "glRectsv");
    stub_funcs.ptr_ms_glVertexPointer = try_find_sym(opengl, "glVertexPointer");
    stub_funcs.ptr_ms_glNormalPointer = try_find_sym(opengl, "glNormalPointer");
    stub_funcs.ptr_ms_glColorPointer = try_find_sym(opengl, "glColorPointer");
    stub_funcs.ptr_ms_glIndexPointer = try_find_sym(opengl, "glIndexPointer");
    stub_funcs.ptr_ms_glTexCoordPointer = try_find_sym(opengl, "glTexCoordPointer");
    stub_funcs.ptr_ms_glEdgeFlagPointer = try_find_sym(opengl, "glEdgeFlagPointer");
    stub_funcs.ptr_ms_glGetPointerv = try_find_sym(opengl, "glGetPointerv");
    stub_funcs.ptr_ms_glArrayElement = try_find_sym(opengl, "glArrayElement");
    stub_funcs.ptr_ms_glDrawArrays = try_find_sym(opengl, "glDrawArrays");
    stub_funcs.ptr_ms_glDrawElements = try_find_sym(opengl, "glDrawElements");
    stub_funcs.ptr_ms_glInterleavedArrays = try_find_sym(opengl, "glInterleavedArrays");
    stub_funcs.ptr_ms_glShadeModel = try_find_sym(opengl, "glShadeModel");
    stub_funcs.ptr_ms_glLightf = try_find_sym(opengl, "glLightf");
    stub_funcs.ptr_ms_glLighti = try_find_sym(opengl, "glLighti");
    stub_funcs.ptr_ms_glLightfv = try_find_sym(opengl, "glLightfv");
    stub_funcs.ptr_ms_glLightiv = try_find_sym(opengl, "glLightiv");
    stub_funcs.ptr_ms_glGetLightfv = try_find_sym(opengl, "glGetLightfv");
    stub_funcs.ptr_ms_glGetLightiv = try_find_sym(opengl, "glGetLightiv");
    stub_funcs.ptr_ms_glLightModelf = try_find_sym(opengl, "glLightModelf");
    stub_funcs.ptr_ms_glLightModeli = try_find_sym(opengl, "glLightModeli");
    stub_funcs.ptr_ms_glLightModelfv = try_find_sym(opengl, "glLightModelfv");
    stub_funcs.ptr_ms_glLightModeliv = try_find_sym(opengl, "glLightModeliv");
    stub_funcs.ptr_ms_glMaterialf = try_find_sym(opengl, "glMaterialf");
    stub_funcs.ptr_ms_glMateriali = try_find_sym(opengl, "glMateriali");
    stub_funcs.ptr_ms_glMaterialfv = try_find_sym(opengl, "glMaterialfv");
    stub_funcs.ptr_ms_glMaterialiv = try_find_sym(opengl, "glMaterialiv");
    stub_funcs.ptr_ms_glGetMaterialfv = try_find_sym(opengl, "glGetMaterialfv");
    stub_funcs.ptr_ms_glGetMaterialiv = try_find_sym(opengl, "glGetMaterialiv");
    stub_funcs.ptr_ms_glColorMaterial = try_find_sym(opengl, "glColorMaterial");
    stub_funcs.ptr_ms_glPixelZoom = try_find_sym(opengl, "glPixelZoom");
    stub_funcs.ptr_ms_glPixelStoref = try_find_sym(opengl, "glPixelStoref");
    stub_funcs.ptr_ms_glPixelStorei = try_find_sym(opengl, "glPixelStorei");
    stub_funcs.ptr_ms_glPixelTransferf = try_find_sym(opengl, "glPixelTransferf");
    stub_funcs.ptr_ms_glPixelTransferi = try_find_sym(opengl, "glPixelTransferi");
    stub_funcs.ptr_ms_glPixelMapfv = try_find_sym(opengl, "glPixelMapfv");
    stub_funcs.ptr_ms_glPixelMapuiv = try_find_sym(opengl, "glPixelMapuiv");
    stub_funcs.ptr_ms_glPixelMapusv = try_find_sym(opengl, "glPixelMapusv");
    stub_funcs.ptr_ms_glGetPixelMapfv = try_find_sym(opengl, "glGetPixelMapfv");
    stub_funcs.ptr_ms_glGetPixelMapuiv = try_find_sym(opengl, "glGetPixelMapuiv");
    stub_funcs.ptr_ms_glGetPixelMapusv = try_find_sym(opengl, "glGetPixelMapusv");
    stub_funcs.ptr_ms_glBitmap = try_find_sym(opengl, "glBitmap");
    stub_funcs.ptr_ms_glReadPixels = try_find_sym(opengl, "glReadPixels");
    stub_funcs.ptr_ms_glDrawPixels = try_find_sym(opengl, "glDrawPixels");
    stub_funcs.ptr_ms_glCopyPixels = try_find_sym(opengl, "glCopyPixels");
    stub_funcs.ptr_ms_glStencilFunc = try_find_sym(opengl, "glStencilFunc");
    stub_funcs.ptr_ms_glStencilMask = try_find_sym(opengl, "glStencilMask");
    stub_funcs.ptr_ms_glStencilOp = try_find_sym(opengl, "glStencilOp");
    stub_funcs.ptr_ms_glClearStencil = try_find_sym(opengl, "glClearStencil");
    stub_funcs.ptr_ms_glTexGend = try_find_sym(opengl, "glTexGend");
    stub_funcs.ptr_ms_glTexGenf = try_find_sym(opengl, "glTexGenf");
    stub_funcs.ptr_ms_glTexGeni = try_find_sym(opengl, "glTexGeni");
    stub_funcs.ptr_ms_glTexGendv = try_find_sym(opengl, "glTexGendv");
    stub_funcs.ptr_ms_glTexGenfv = try_find_sym(opengl, "glTexGenfv");
    stub_funcs.ptr_ms_glTexGeniv = try_find_sym(opengl, "glTexGeniv");
    stub_funcs.ptr_ms_glGetTexGendv = try_find_sym(opengl, "glGetTexGendv");
    stub_funcs.ptr_ms_glGetTexGenfv = try_find_sym(opengl, "glGetTexGenfv");
    stub_funcs.ptr_ms_glGetTexGeniv = try_find_sym(opengl, "glGetTexGeniv");
    stub_funcs.ptr_ms_glTexEnvf = try_find_sym(opengl, "glTexEnvf");
    stub_funcs.ptr_ms_glTexEnvi = try_find_sym(opengl, "glTexEnvi");
    stub_funcs.ptr_ms_glTexEnvfv = try_find_sym(opengl, "glTexEnvfv");
    stub_funcs.ptr_ms_glTexEnviv = try_find_sym(opengl, "glTexEnviv");
    stub_funcs.ptr_ms_glGetTexEnvfv = try_find_sym(opengl, "glGetTexEnvfv");
    stub_funcs.ptr_ms_glGetTexEnviv = try_find_sym(opengl, "glGetTexEnviv");
    stub_funcs.ptr_ms_glTexParameterf = try_find_sym(opengl, "glTexParameterf");
    stub_funcs.ptr_ms_glTexParameteri = try_find_sym(opengl, "glTexParameteri");
    stub_funcs.ptr_ms_glTexParameterfv = try_find_sym(opengl, "glTexParameterfv");
    stub_funcs.ptr_ms_glTexParameteriv = try_find_sym(opengl, "glTexParameteriv");
    stub_funcs.ptr_ms_glGetTexParameterfv = try_find_sym(opengl, "glGetTexParameterfv");
    stub_funcs.ptr_ms_glGetTexParameteriv = try_find_sym(opengl, "glGetTexParameteriv");
    stub_funcs.ptr_ms_glGetTexLevelParameterfv = try_find_sym(opengl, "glGetTexLevelParameterfv");
    stub_funcs.ptr_ms_glGetTexLevelParameteriv = try_find_sym(opengl, "glGetTexLevelParameteriv");
    stub_funcs.ptr_ms_glTexImage1D = try_find_sym(opengl, "glTexImage1D");
    stub_funcs.ptr_ms_glTexImage2D = try_find_sym(opengl, "glTexImage2D");
    stub_funcs.ptr_ms_glGetTexImage = try_find_sym(opengl, "glGetTexImage");
    stub_funcs.ptr_ms_glGenTextures = try_find_sym(opengl, "glGenTextures");
    stub_funcs.ptr_ms_glDeleteTextures = try_find_sym(opengl, "glDeleteTextures");
    stub_funcs.ptr_ms_glBindTexture = try_find_sym(opengl, "glBindTexture");
    stub_funcs.ptr_ms_glPrioritizeTextures = try_find_sym(opengl, "glPrioritizeTextures");
    stub_funcs.ptr_ms_glAreTexturesResident = try_find_sym(opengl, "glAreTexturesResident");
    stub_funcs.ptr_ms_glIsTexture = try_find_sym(opengl, "glIsTexture");
    stub_funcs.ptr_ms_glTexSubImage1D = try_find_sym(opengl, "glTexSubImage1D");
    stub_funcs.ptr_ms_glTexSubImage2D = try_find_sym(opengl, "glTexSubImage2D");
    stub_funcs.ptr_ms_glCopyTexImage1D = try_find_sym(opengl, "glCopyTexImage1D");
    stub_funcs.ptr_ms_glCopyTexImage2D = try_find_sym(opengl, "glCopyTexImage2D");
    stub_funcs.ptr_ms_glCopyTexSubImage1D = try_find_sym(opengl, "glCopyTexSubImage1D");
    stub_funcs.ptr_ms_glCopyTexSubImage2D = try_find_sym(opengl, "glCopyTexSubImage2D");
    stub_funcs.ptr_ms_glMap1d = try_find_sym(opengl, "glMap1d");
    stub_funcs.ptr_ms_glMap1f = try_find_sym(opengl, "glMap1f");
    stub_funcs.ptr_ms_glMap2d = try_find_sym(opengl, "glMap2d");
    stub_funcs.ptr_ms_glMap2f = try_find_sym(opengl, "glMap2f");
    stub_funcs.ptr_ms_glGetMapdv = try_find_sym(opengl, "glGetMapdv");
    stub_funcs.ptr_ms_glGetMapfv = try_find_sym(opengl, "glGetMapfv");
    stub_funcs.ptr_ms_glGetMapiv = try_find_sym(opengl, "glGetMapiv");
    stub_funcs.ptr_ms_glEvalCoord1d = try_find_sym(opengl, "glEvalCoord1d");
    stub_funcs.ptr_ms_glEvalCoord1f = try_find_sym(opengl, "glEvalCoord1f");
    stub_funcs.ptr_ms_glEvalCoord1dv = try_find_sym(opengl, "glEvalCoord1dv");
    stub_funcs.ptr_ms_glEvalCoord1fv = try_find_sym(opengl, "glEvalCoord1fv");
    stub_funcs.ptr_ms_glEvalCoord2d = try_find_sym(opengl, "glEvalCoord2d");
    stub_funcs.ptr_ms_glEvalCoord2f = try_find_sym(opengl, "glEvalCoord2f");
    stub_funcs.ptr_ms_glEvalCoord2dv = try_find_sym(opengl, "glEvalCoord2dv");
    stub_funcs.ptr_ms_glEvalCoord2fv = try_find_sym(opengl, "glEvalCoord2fv");
    stub_funcs.ptr_ms_glMapGrid1d = try_find_sym(opengl, "glMapGrid1d");
    stub_funcs.ptr_ms_glMapGrid1f = try_find_sym(opengl, "glMapGrid1f");
    stub_funcs.ptr_ms_glMapGrid2d = try_find_sym(opengl, "glMapGrid2d");
    stub_funcs.ptr_ms_glMapGrid2f = try_find_sym(opengl, "glMapGrid2f");
    stub_funcs.ptr_ms_glEvalPoint1 = try_find_sym(opengl, "glEvalPoint1");
    stub_funcs.ptr_ms_glEvalPoint2 = try_find_sym(opengl, "glEvalPoint2");
    stub_funcs.ptr_ms_glEvalMesh1 = try_find_sym(opengl, "glEvalMesh1");
    stub_funcs.ptr_ms_glEvalMesh2 = try_find_sym(opengl, "glEvalMesh2");
    stub_funcs.ptr_ms_glFogf = try_find_sym(opengl, "glFogf");
    stub_funcs.ptr_ms_glFogi = try_find_sym(opengl, "glFogi");
    stub_funcs.ptr_ms_glFogfv = try_find_sym(opengl, "glFogfv");
    stub_funcs.ptr_ms_glFogiv = try_find_sym(opengl, "glFogiv");
    stub_funcs.ptr_ms_glFeedbackBuffer = try_find_sym(opengl, "glFeedbackBuffer");
    stub_funcs.ptr_ms_glPassThrough = try_find_sym(opengl, "glPassThrough");
    stub_funcs.ptr_ms_glSelectBuffer = try_find_sym(opengl, "glSelectBuffer");
    stub_funcs.ptr_ms_glInitNames = try_find_sym(opengl, "glInitNames");
    stub_funcs.ptr_ms_glLoadName = try_find_sym(opengl, "glLoadName");
    stub_funcs.ptr_ms_glPushName = try_find_sym(opengl, "glPushName");
    stub_funcs.ptr_ms_glPopName = try_find_sym(opengl, "glPopName");
    stub_funcs.ptr_ms_glDrawRangeElements = try_find_sym(opengl, "glDrawRangeElements");
    stub_funcs.ptr_ms_glTexImage3D = try_find_sym(opengl, "glTexImage3D");
    stub_funcs.ptr_ms_glTexSubImage3D = try_find_sym(opengl, "glTexSubImage3D");
    stub_funcs.ptr_ms_glCopyTexSubImage3D = try_find_sym(opengl, "glCopyTexSubImage3D");
    stub_funcs.ptr_ms_glColorTable = try_find_sym(opengl, "glColorTable");
    stub_funcs.ptr_ms_glColorSubTable = try_find_sym(opengl, "glColorSubTable");
    stub_funcs.ptr_ms_glColorTableParameteriv = try_find_sym(opengl, "glColorTableParameteriv");
    stub_funcs.ptr_ms_glColorTableParameterfv = try_find_sym(opengl, "glColorTableParameterfv");
    stub_funcs.ptr_ms_glCopyColorSubTable = try_find_sym(opengl, "glCopyColorSubTable");
    stub_funcs.ptr_ms_glCopyColorTable = try_find_sym(opengl, "glCopyColorTable");
    stub_funcs.ptr_ms_glGetColorTable = try_find_sym(opengl, "glGetColorTable");
    stub_funcs.ptr_ms_glGetColorTableParameterfv = try_find_sym(opengl, "glGetColorTableParameterfv");
    stub_funcs.ptr_ms_glGetColorTableParameteriv = try_find_sym(opengl, "glGetColorTableParameteriv");
    stub_funcs.ptr_ms_glBlendEquation = try_find_sym(opengl, "glBlendEquation");
    stub_funcs.ptr_ms_glBlendColor = try_find_sym(opengl, "glBlendColor");
    stub_funcs.ptr_ms_glHistogram = try_find_sym(opengl, "glHistogram");
    stub_funcs.ptr_ms_glResetHistogram = try_find_sym(opengl, "glResetHistogram");
    stub_funcs.ptr_ms_glGetHistogram = try_find_sym(opengl, "glGetHistogram");
    stub_funcs.ptr_ms_glGetHistogramParameterfv = try_find_sym(opengl, "glGetHistogramParameterfv");
    stub_funcs.ptr_ms_glGetHistogramParameteriv = try_find_sym(opengl, "glGetHistogramParameteriv");
    stub_funcs.ptr_ms_glMinmax = try_find_sym(opengl, "glMinmax");
    stub_funcs.ptr_ms_glResetMinmax = try_find_sym(opengl, "glResetMinmax");
    stub_funcs.ptr_ms_glGetMinmax = try_find_sym(opengl, "glGetMinmax");
    stub_funcs.ptr_ms_glGetMinmaxParameterfv = try_find_sym(opengl, "glGetMinmaxParameterfv");
    stub_funcs.ptr_ms_glGetMinmaxParameteriv = try_find_sym(opengl, "glGetMinmaxParameteriv");
    stub_funcs.ptr_ms_glConvolutionFilter1D = try_find_sym(opengl, "glConvolutionFilter1D");
    stub_funcs.ptr_ms_glConvolutionFilter2D = try_find_sym(opengl, "glConvolutionFilter2D");
    stub_funcs.ptr_ms_glConvolutionParameterf = try_find_sym(opengl, "glConvolutionParameterf");
    stub_funcs.ptr_ms_glConvolutionParameterfv = try_find_sym(opengl, "glConvolutionParameterfv");
    stub_funcs.ptr_ms_glConvolutionParameteri = try_find_sym(opengl, "glConvolutionParameteri");
    stub_funcs.ptr_ms_glConvolutionParameteriv = try_find_sym(opengl, "glConvolutionParameteriv");
    stub_funcs.ptr_ms_glCopyConvolutionFilter1D = try_find_sym(opengl, "glCopyConvolutionFilter1D");
    stub_funcs.ptr_ms_glCopyConvolutionFilter2D = try_find_sym(opengl, "glCopyConvolutionFilter2D");
    stub_funcs.ptr_ms_glGetConvolutionFilter = try_find_sym(opengl, "glGetConvolutionFilter");
    stub_funcs.ptr_ms_glGetConvolutionParameterfv = try_find_sym(opengl, "glGetConvolutionParameterfv");
    stub_funcs.ptr_ms_glGetConvolutionParameteriv = try_find_sym(opengl, "glGetConvolutionParameteriv");
    stub_funcs.ptr_ms_glSeparableFilter2D = try_find_sym(opengl, "glSeparableFilter2D");
    stub_funcs.ptr_ms_glGetSeparableFilter = try_find_sym(opengl, "glGetSeparableFilter");
    stub_funcs.ptr_ms_glActiveTexture = try_find_sym(opengl, "glActiveTexture");
    stub_funcs.ptr_ms_glClientActiveTexture = try_find_sym(opengl, "glClientActiveTexture");
    stub_funcs.ptr_ms_glCompressedTexImage1D = try_find_sym(opengl, "glCompressedTexImage1D");
    stub_funcs.ptr_ms_glCompressedTexImage2D = try_find_sym(opengl, "glCompressedTexImage2D");
    stub_funcs.ptr_ms_glCompressedTexImage3D = try_find_sym(opengl, "glCompressedTexImage3D");
    stub_funcs.ptr_ms_glCompressedTexSubImage1D = try_find_sym(opengl, "glCompressedTexSubImage1D");
    stub_funcs.ptr_ms_glCompressedTexSubImage2D = try_find_sym(opengl, "glCompressedTexSubImage2D");
    stub_funcs.ptr_ms_glCompressedTexSubImage3D = try_find_sym(opengl, "glCompressedTexSubImage3D");
    stub_funcs.ptr_ms_glGetCompressedTexImage = try_find_sym(opengl, "glGetCompressedTexImage");
    stub_funcs.ptr_ms_glMultiTexCoord1d = try_find_sym(opengl, "glMultiTexCoord1d");
    stub_funcs.ptr_ms_glMultiTexCoord1dv = try_find_sym(opengl, "glMultiTexCoord1dv");
    stub_funcs.ptr_ms_glMultiTexCoord1f = try_find_sym(opengl, "glMultiTexCoord1f");
    stub_funcs.ptr_ms_glMultiTexCoord1fv = try_find_sym(opengl, "glMultiTexCoord1fv");
    stub_funcs.ptr_ms_glMultiTexCoord1i = try_find_sym(opengl, "glMultiTexCoord1i");
    stub_funcs.ptr_ms_glMultiTexCoord1iv = try_find_sym(opengl, "glMultiTexCoord1iv");
    stub_funcs.ptr_ms_glMultiTexCoord1s = try_find_sym(opengl, "glMultiTexCoord1s");
    stub_funcs.ptr_ms_glMultiTexCoord1sv = try_find_sym(opengl, "glMultiTexCoord1sv");
    stub_funcs.ptr_ms_glMultiTexCoord2d = try_find_sym(opengl, "glMultiTexCoord2d");
    stub_funcs.ptr_ms_glMultiTexCoord2dv = try_find_sym(opengl, "glMultiTexCoord2dv");
    stub_funcs.ptr_ms_glMultiTexCoord2f = try_find_sym(opengl, "glMultiTexCoord2f");
    stub_funcs.ptr_ms_glMultiTexCoord2fv = try_find_sym(opengl, "glMultiTexCoord2fv");
    stub_funcs.ptr_ms_glMultiTexCoord2i = try_find_sym(opengl, "glMultiTexCoord2i");
    stub_funcs.ptr_ms_glMultiTexCoord2iv = try_find_sym(opengl, "glMultiTexCoord2iv");
    stub_funcs.ptr_ms_glMultiTexCoord2s = try_find_sym(opengl, "glMultiTexCoord2s");
    stub_funcs.ptr_ms_glMultiTexCoord2sv = try_find_sym(opengl, "glMultiTexCoord2sv");
    stub_funcs.ptr_ms_glMultiTexCoord3d = try_find_sym(opengl, "glMultiTexCoord3d");
    stub_funcs.ptr_ms_glMultiTexCoord3dv = try_find_sym(opengl, "glMultiTexCoord3dv");
    stub_funcs.ptr_ms_glMultiTexCoord3f = try_find_sym(opengl, "glMultiTexCoord3f");
    stub_funcs.ptr_ms_glMultiTexCoord3fv = try_find_sym(opengl, "glMultiTexCoord3fv");
    stub_funcs.ptr_ms_glMultiTexCoord3i = try_find_sym(opengl, "glMultiTexCoord3i");
    stub_funcs.ptr_ms_glMultiTexCoord3iv = try_find_sym(opengl, "glMultiTexCoord3iv");
    stub_funcs.ptr_ms_glMultiTexCoord3s = try_find_sym(opengl, "glMultiTexCoord3s");
    stub_funcs.ptr_ms_glMultiTexCoord3sv = try_find_sym(opengl, "glMultiTexCoord3sv");
    stub_funcs.ptr_ms_glMultiTexCoord4d = try_find_sym(opengl, "glMultiTexCoord4d");
    stub_funcs.ptr_ms_glMultiTexCoord4dv = try_find_sym(opengl, "glMultiTexCoord4dv");
    stub_funcs.ptr_ms_glMultiTexCoord4f = try_find_sym(opengl, "glMultiTexCoord4f");
    stub_funcs.ptr_ms_glMultiTexCoord4fv = try_find_sym(opengl, "glMultiTexCoord4fv");
    stub_funcs.ptr_ms_glMultiTexCoord4i = try_find_sym(opengl, "glMultiTexCoord4i");
    stub_funcs.ptr_ms_glMultiTexCoord4iv = try_find_sym(opengl, "glMultiTexCoord4iv");
    stub_funcs.ptr_ms_glMultiTexCoord4s = try_find_sym(opengl, "glMultiTexCoord4s");
    stub_funcs.ptr_ms_glMultiTexCoord4sv = try_find_sym(opengl, "glMultiTexCoord4sv");
    stub_funcs.ptr_ms_glLoadTransposeMatrixd = try_find_sym(opengl, "glLoadTransposeMatrixd");
    stub_funcs.ptr_ms_glLoadTransposeMatrixf = try_find_sym(opengl, "glLoadTransposeMatrixf");
    stub_funcs.ptr_ms_glMultTransposeMatrixd = try_find_sym(opengl, "glMultTransposeMatrixd");
    stub_funcs.ptr_ms_glMultTransposeMatrixf = try_find_sym(opengl, "glMultTransposeMatrixf");
    stub_funcs.ptr_ms_glSampleCoverage = try_find_sym(opengl, "glSampleCoverage");
    stub_funcs.ptr_ms_glActiveTextureARB = try_find_sym(opengl, "glActiveTextureARB");
    stub_funcs.ptr_ms_glClientActiveTextureARB = try_find_sym(opengl, "glClientActiveTextureARB");
    stub_funcs.ptr_ms_glMultiTexCoord1dARB = try_find_sym(opengl, "glMultiTexCoord1dARB");
    stub_funcs.ptr_ms_glMultiTexCoord1dvARB = try_find_sym(opengl, "glMultiTexCoord1dvARB");
    stub_funcs.ptr_ms_glMultiTexCoord1fARB = try_find_sym(opengl, "glMultiTexCoord1fARB");
    stub_funcs.ptr_ms_glMultiTexCoord1fvARB = try_find_sym(opengl, "glMultiTexCoord1fvARB");
    stub_funcs.ptr_ms_glMultiTexCoord1iARB = try_find_sym(opengl, "glMultiTexCoord1iARB");
    stub_funcs.ptr_ms_glMultiTexCoord1ivARB = try_find_sym(opengl, "glMultiTexCoord1ivARB");
    stub_funcs.ptr_ms_glMultiTexCoord1sARB = try_find_sym(opengl, "glMultiTexCoord1sARB");
    stub_funcs.ptr_ms_glMultiTexCoord1svARB = try_find_sym(opengl, "glMultiTexCoord1svARB");
    stub_funcs.ptr_ms_glMultiTexCoord2dARB = try_find_sym(opengl, "glMultiTexCoord2dARB");
    stub_funcs.ptr_ms_glMultiTexCoord2dvARB = try_find_sym(opengl, "glMultiTexCoord2dvARB");
    stub_funcs.ptr_ms_glMultiTexCoord2fARB = try_find_sym(opengl, "glMultiTexCoord2fARB");
    stub_funcs.ptr_ms_glMultiTexCoord2fvARB = try_find_sym(opengl, "glMultiTexCoord2fvARB");
    stub_funcs.ptr_ms_glMultiTexCoord2iARB = try_find_sym(opengl, "glMultiTexCoord2iARB");
    stub_funcs.ptr_ms_glMultiTexCoord2ivARB = try_find_sym(opengl, "glMultiTexCoord2ivARB");
    stub_funcs.ptr_ms_glMultiTexCoord2sARB = try_find_sym(opengl, "glMultiTexCoord2sARB");
    stub_funcs.ptr_ms_glMultiTexCoord2svARB = try_find_sym(opengl, "glMultiTexCoord2svARB");
    stub_funcs.ptr_ms_glMultiTexCoord3dARB = try_find_sym(opengl, "glMultiTexCoord3dARB");
    stub_funcs.ptr_ms_glMultiTexCoord3dvARB = try_find_sym(opengl, "glMultiTexCoord3dvARB");
    stub_funcs.ptr_ms_glMultiTexCoord3fARB = try_find_sym(opengl, "glMultiTexCoord3fARB");
    stub_funcs.ptr_ms_glMultiTexCoord3fvARB = try_find_sym(opengl, "glMultiTexCoord3fvARB");
    stub_funcs.ptr_ms_glMultiTexCoord3iARB = try_find_sym(opengl, "glMultiTexCoord3iARB");
    stub_funcs.ptr_ms_glMultiTexCoord3ivARB = try_find_sym(opengl, "glMultiTexCoord3ivARB");
    stub_funcs.ptr_ms_glMultiTexCoord3sARB = try_find_sym(opengl, "glMultiTexCoord3sARB");
    stub_funcs.ptr_ms_glMultiTexCoord3svARB = try_find_sym(opengl, "glMultiTexCoord3svARB");
    stub_funcs.ptr_ms_glMultiTexCoord4dARB = try_find_sym(opengl, "glMultiTexCoord4dARB");
    stub_funcs.ptr_ms_glMultiTexCoord4dvARB = try_find_sym(opengl, "glMultiTexCoord4dvARB");
    stub_funcs.ptr_ms_glMultiTexCoord4fARB = try_find_sym(opengl, "glMultiTexCoord4fARB");
    stub_funcs.ptr_ms_glMultiTexCoord4fvARB = try_find_sym(opengl, "glMultiTexCoord4fvARB");
    stub_funcs.ptr_ms_glMultiTexCoord4iARB = try_find_sym(opengl, "glMultiTexCoord4iARB");
    stub_funcs.ptr_ms_glMultiTexCoord4ivARB = try_find_sym(opengl, "glMultiTexCoord4ivARB");
    stub_funcs.ptr_ms_glMultiTexCoord4sARB = try_find_sym(opengl, "glMultiTexCoord4sARB");
    stub_funcs.ptr_ms_glMultiTexCoord4svARB = try_find_sym(opengl, "glMultiTexCoord4svARB");
    stub_funcs.ptr_ms_glBlendEquationSeparateATI = try_find_sym(opengl, "glBlendEquationSeparateATI");
    stub_funcs.ptr_ms_glXChooseVisual = try_find_sym(opengl, "glXChooseVisual");
    stub_funcs.ptr_ms_glXCreateContext = try_find_sym(opengl, "glXCreateContext");
    stub_funcs.ptr_ms_glXDestroyContext = try_find_sym(opengl, "glXDestroyContext");
    stub_funcs.ptr_ms_glXMakeCurrent = try_find_sym(opengl, "glXMakeCurrent");
    stub_funcs.ptr_ms_glXCopyContext = try_find_sym(opengl, "glXCopyContext");
    stub_funcs.ptr_ms_glXSwapBuffers = try_find_sym(opengl, "glXSwapBuffers");
    stub_funcs.ptr_ms_glXCreateGLXPixmap = try_find_sym(opengl, "glXCreateGLXPixmap");
    stub_funcs.ptr_ms_glXDestroyGLXPixmap = try_find_sym(opengl, "glXDestroyGLXPixmap");
    stub_funcs.ptr_ms_glXQueryExtension = try_find_sym(opengl, "glXQueryExtension");
    stub_funcs.ptr_ms_glXQueryVersion = try_find_sym(opengl, "glXQueryVersion");
    stub_funcs.ptr_ms_glXIsDirect = try_find_sym(opengl, "glXIsDirect");
    stub_funcs.ptr_ms_glXGetConfig = try_find_sym(opengl, "glXGetConfig");
    stub_funcs.ptr_ms_glXGetCurrentContext = try_find_sym(opengl, "glXGetCurrentContext");
    stub_funcs.ptr_ms_glXGetCurrentDrawable = try_find_sym(opengl, "glXGetCurrentDrawable");
    stub_funcs.ptr_ms_glXWaitGL = try_find_sym(opengl, "glXWaitGL");
    stub_funcs.ptr_ms_glXWaitX = try_find_sym(opengl, "glXWaitX");
    stub_funcs.ptr_ms_glXUseXFont = try_find_sym(opengl, "glXUseXFont");
    stub_funcs.ptr_ms_glXQueryExtensionsString = try_find_sym(opengl, "glXQueryExtensionsString");
    stub_funcs.ptr_ms_glXQueryServerString = try_find_sym(opengl, "glXQueryServerString");
    stub_funcs.ptr_ms_glXGetClientString = try_find_sym(opengl, "glXGetClientString");
    stub_funcs.ptr_ms_glXGetCurrentDisplay = try_find_sym(opengl, "glXGetCurrentDisplay");
    stub_funcs.ptr_ms_glXChooseFBConfig = try_find_sym(opengl, "glXChooseFBConfig");
    stub_funcs.ptr_ms_glXGetFBConfigAttrib = try_find_sym(opengl, "glXGetFBConfigAttrib");
    stub_funcs.ptr_ms_glXGetFBConfigs = try_find_sym(opengl, "glXGetFBConfigs");
    stub_funcs.ptr_ms_glXGetVisualFromFBConfig = try_find_sym(opengl, "glXGetVisualFromFBConfig");
    stub_funcs.ptr_ms_glXCreateWindow = try_find_sym(opengl, "glXCreateWindow");
    stub_funcs.ptr_ms_glXDestroyWindow = try_find_sym(opengl, "glXDestroyWindow");
    stub_funcs.ptr_ms_glXCreatePixmap = try_find_sym(opengl, "glXCreatePixmap");
    stub_funcs.ptr_ms_glXDestroyPixmap = try_find_sym(opengl, "glXDestroyPixmap");
    stub_funcs.ptr_ms_glXCreatePbuffer = try_find_sym(opengl, "glXCreatePbuffer");
    stub_funcs.ptr_ms_glXDestroyPbuffer = try_find_sym(opengl, "glXDestroyPbuffer");
    stub_funcs.ptr_ms_glXQueryDrawable = try_find_sym(opengl, "glXQueryDrawable");
    stub_funcs.ptr_ms_glXCreateNewContext = try_find_sym(opengl, "glXCreateNewContext");
    stub_funcs.ptr_ms_glXMakeContextCurrent = try_find_sym(opengl, "glXMakeContextCurrent");
    stub_funcs.ptr_ms_glXGetCurrentReadDrawable = try_find_sym(opengl, "glXGetCurrentReadDrawable");
    stub_funcs.ptr_ms_glXQueryContext = try_find_sym(opengl, "glXQueryContext");
    stub_funcs.ptr_ms_glXSelectEvent = try_find_sym(opengl, "glXSelectEvent");
    stub_funcs.ptr_ms_glXGetSelectedEvent = try_find_sym(opengl, "glXGetSelectedEvent");
    stub_funcs.ptr_ms_glXGetProcAddressARB = try_find_sym(opengl, "glXGetProcAddressARB");
    stub_funcs.ptr_ms_glXGetProcAddress = try_find_sym(opengl, "glXGetProcAddress");
    stub_funcs.ptr_ms_glXAllocateMemoryNV = try_find_sym(opengl, "glXAllocateMemoryNV");
    stub_funcs.ptr_ms_glXFreeMemoryNV = try_find_sym(opengl, "glXFreeMemoryNV");
    stub_funcs.ptr_ms_glXBindTexImageARB = try_find_sym(opengl, "glXBindTexImageARB");
    stub_funcs.ptr_ms_glXReleaseTexImageARB = try_find_sym(opengl, "glXReleaseTexImageARB");
    stub_funcs.ptr_ms_glXDrawableAttribARB = try_find_sym(opengl, "glXDrawableAttribARB");
    stub_funcs.ptr_ms_glXGetFrameUsageMESA = try_find_sym(opengl, "glXGetFrameUsageMESA");
    stub_funcs.ptr_ms_glXBeginFrameTrackingMESA = try_find_sym(opengl, "glXBeginFrameTrackingMESA");
    stub_funcs.ptr_ms_glXEndFrameTrackingMESA = try_find_sym(opengl, "glXEndFrameTrackingMESA");
    stub_funcs.ptr_ms_glXQueryFrameTrackingMESA = try_find_sym(opengl, "glXQueryFrameTrackingMESA");
}

void (glClearIndex)(GLfloat c) { 
	if((IsLinux())){
		stub_funcs.ptr_glClearIndex(c);  
	}
	else {
		stub_funcs.ptr_ms_glClearIndex(c); 
	}}
void (glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glClearColor(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glClearColor(red, green, blue, alpha); 
	}}
void (glClear)(GLbitfield mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glClear(mask);  
	}
	else {
		stub_funcs.ptr_ms_glClear(mask); 
	}}
void (glIndexMask)(GLuint mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexMask(mask);  
	}
	else {
		stub_funcs.ptr_ms_glIndexMask(mask); 
	}}
void (glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorMask(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColorMask(red, green, blue, alpha); 
	}}
void (glAlphaFunc)(GLenum func, GLclampf ref) { 
	if((IsLinux())){
		stub_funcs.ptr_glAlphaFunc(func, ref);  
	}
	else {
		stub_funcs.ptr_ms_glAlphaFunc(func, ref); 
	}}
void (glBlendFunc)(GLenum sfactor, GLenum dfactor) { 
	if((IsLinux())){
		stub_funcs.ptr_glBlendFunc(sfactor, dfactor);  
	}
	else {
		stub_funcs.ptr_ms_glBlendFunc(sfactor, dfactor); 
	}}
void (glLogicOp)(GLenum opcode) { 
	if((IsLinux())){
		stub_funcs.ptr_glLogicOp(opcode);  
	}
	else {
		stub_funcs.ptr_ms_glLogicOp(opcode); 
	}}
void (glCullFace)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glCullFace(mode);  
	}
	else {
		stub_funcs.ptr_ms_glCullFace(mode); 
	}}
void (glFrontFace)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glFrontFace(mode);  
	}
	else {
		stub_funcs.ptr_ms_glFrontFace(mode); 
	}}
void (glPointSize)(GLfloat size) { 
	if((IsLinux())){
		stub_funcs.ptr_glPointSize(size);  
	}
	else {
		stub_funcs.ptr_ms_glPointSize(size); 
	}}
void (glLineWidth)(GLfloat width) { 
	if((IsLinux())){
		stub_funcs.ptr_glLineWidth(width);  
	}
	else {
		stub_funcs.ptr_ms_glLineWidth(width); 
	}}
void (glLineStipple)(GLint factor, GLushort pattern) { 
	if((IsLinux())){
		stub_funcs.ptr_glLineStipple(factor, pattern);  
	}
	else {
		stub_funcs.ptr_ms_glLineStipple(factor, pattern); 
	}}
void (glPolygonMode)(GLenum face, GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glPolygonMode(face, mode);  
	}
	else {
		stub_funcs.ptr_ms_glPolygonMode(face, mode); 
	}}
void (glPolygonOffset)(GLfloat factor, GLfloat units) { 
	if((IsLinux())){
		stub_funcs.ptr_glPolygonOffset(factor, units);  
	}
	else {
		stub_funcs.ptr_ms_glPolygonOffset(factor, units); 
	}}
void (glPolygonStipple)(const GLubyte * mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glPolygonStipple(mask);  
	}
	else {
		stub_funcs.ptr_ms_glPolygonStipple(mask); 
	}}
void (glGetPolygonStipple)(GLubyte * mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetPolygonStipple(mask);  
	}
	else {
		stub_funcs.ptr_ms_glGetPolygonStipple(mask); 
	}}
void (glEdgeFlag)(GLboolean flag) { 
	if((IsLinux())){
		stub_funcs.ptr_glEdgeFlag(flag);  
	}
	else {
		stub_funcs.ptr_ms_glEdgeFlag(flag); 
	}}
void (glEdgeFlagv)(const GLboolean * flag) { 
	if((IsLinux())){
		stub_funcs.ptr_glEdgeFlagv(flag);  
	}
	else {
		stub_funcs.ptr_ms_glEdgeFlagv(flag); 
	}}
void (glScissor)(GLint x, GLint y, GLsizei width, GLsizei height) { 
	if((IsLinux())){
		stub_funcs.ptr_glScissor(x, y, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glScissor(x, y, width, height); 
	}}
void (glClipPlane)(GLenum plane, const GLdouble * equation) { 
	if((IsLinux())){
		stub_funcs.ptr_glClipPlane(plane, equation);  
	}
	else {
		stub_funcs.ptr_ms_glClipPlane(plane, equation); 
	}}
void (glGetClipPlane)(GLenum plane, GLdouble * equation) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetClipPlane(plane, equation);  
	}
	else {
		stub_funcs.ptr_ms_glGetClipPlane(plane, equation); 
	}}
void (glDrawBuffer)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glDrawBuffer(mode);  
	}
	else {
		stub_funcs.ptr_ms_glDrawBuffer(mode); 
	}}
void (glReadBuffer)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glReadBuffer(mode);  
	}
	else {
		stub_funcs.ptr_ms_glReadBuffer(mode); 
	}}
void (glEnable)(GLenum cap) { 
	if((IsLinux())){
		stub_funcs.ptr_glEnable(cap);  
	}
	else {
		stub_funcs.ptr_ms_glEnable(cap); 
	}}
void (glDisable)(GLenum cap) { 
	if((IsLinux())){
		stub_funcs.ptr_glDisable(cap);  
	}
	else {
		stub_funcs.ptr_ms_glDisable(cap); 
	}}
GLboolean (glIsEnabled)(GLenum cap) { 
	if((IsLinux())){
		return stub_funcs.ptr_glIsEnabled(cap);  
	}
	else {
		return stub_funcs.ptr_ms_glIsEnabled(cap); 
	}}
void (glEnableClientState)(GLenum cap) { 
	if((IsLinux())){
		stub_funcs.ptr_glEnableClientState(cap);  
	}
	else {
		stub_funcs.ptr_ms_glEnableClientState(cap); 
	}}
void (glDisableClientState)(GLenum cap) { 
	if((IsLinux())){
		stub_funcs.ptr_glDisableClientState(cap);  
	}
	else {
		stub_funcs.ptr_ms_glDisableClientState(cap); 
	}}
void (glGetBooleanv)(GLenum pname, GLboolean * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetBooleanv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetBooleanv(pname, params); 
	}}
void (glGetDoublev)(GLenum pname, GLdouble * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetDoublev(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetDoublev(pname, params); 
	}}
void (glGetFloatv)(GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetFloatv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetFloatv(pname, params); 
	}}
void (glGetIntegerv)(GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetIntegerv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetIntegerv(pname, params); 
	}}
void (glPushAttrib)(GLbitfield mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glPushAttrib(mask);  
	}
	else {
		stub_funcs.ptr_ms_glPushAttrib(mask); 
	}}
void (glPopAttrib)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glPopAttrib();  
	}
	else {
		stub_funcs.ptr_ms_glPopAttrib(); 
	}}
void (glPushClientAttrib)(GLbitfield mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glPushClientAttrib(mask);  
	}
	else {
		stub_funcs.ptr_ms_glPushClientAttrib(mask); 
	}}
void (glPopClientAttrib)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glPopClientAttrib();  
	}
	else {
		stub_funcs.ptr_ms_glPopClientAttrib(); 
	}}
GLint (glRenderMode)(GLenum mode) { 
	if((IsLinux())){
		return stub_funcs.ptr_glRenderMode(mode);  
	}
	else {
		return stub_funcs.ptr_ms_glRenderMode(mode); 
	}}
GLenum (glGetError)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glGetError();  
	}
	else {
		return stub_funcs.ptr_ms_glGetError(); 
	}}
const GLubyte * (glGetString)(GLenum name) { 
	if((IsLinux())){
		return stub_funcs.ptr_glGetString(name);  
	}
	else {
		return stub_funcs.ptr_ms_glGetString(name); 
	}}
void (glFinish)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glFinish();  
	}
	else {
		stub_funcs.ptr_ms_glFinish(); 
	}}
void (glFlush)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glFlush();  
	}
	else {
		stub_funcs.ptr_ms_glFlush(); 
	}}
void (glHint)(GLenum target, GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glHint(target, mode);  
	}
	else {
		stub_funcs.ptr_ms_glHint(target, mode); 
	}}
void (glClearDepth)(GLclampd depth) { 
	if((IsLinux())){
		stub_funcs.ptr_glClearDepth(depth);  
	}
	else {
		stub_funcs.ptr_ms_glClearDepth(depth); 
	}}
void (glDepthFunc)(GLenum func) { 
	if((IsLinux())){
		stub_funcs.ptr_glDepthFunc(func);  
	}
	else {
		stub_funcs.ptr_ms_glDepthFunc(func); 
	}}
void (glDepthMask)(GLboolean flag) { 
	if((IsLinux())){
		stub_funcs.ptr_glDepthMask(flag);  
	}
	else {
		stub_funcs.ptr_ms_glDepthMask(flag); 
	}}
void (glDepthRange)(GLclampd near_val, GLclampd far_val) { 
	if((IsLinux())){
		stub_funcs.ptr_glDepthRange(near_val, far_val);  
	}
	else {
		stub_funcs.ptr_ms_glDepthRange(near_val, far_val); 
	}}
void (glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glClearAccum(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glClearAccum(red, green, blue, alpha); 
	}}
void (glAccum)(GLenum op, GLfloat value) { 
	if((IsLinux())){
		stub_funcs.ptr_glAccum(op, value);  
	}
	else {
		stub_funcs.ptr_ms_glAccum(op, value); 
	}}
void (glMatrixMode)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glMatrixMode(mode);  
	}
	else {
		stub_funcs.ptr_ms_glMatrixMode(mode); 
	}}
void (glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val) { 
	if((IsLinux())){
		stub_funcs.ptr_glOrtho(left, right, bottom, top, near_val, far_val);  
	}
	else {
		stub_funcs.ptr_ms_glOrtho(left, right, bottom, top, near_val, far_val); 
	}}
void (glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val) { 
	if((IsLinux())){
		stub_funcs.ptr_glFrustum(left, right, bottom, top, near_val, far_val);  
	}
	else {
		stub_funcs.ptr_ms_glFrustum(left, right, bottom, top, near_val, far_val); 
	}}
void (glViewport)(GLint x, GLint y, GLsizei width, GLsizei height) { 
	if((IsLinux())){
		stub_funcs.ptr_glViewport(x, y, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glViewport(x, y, width, height); 
	}}
void (glPushMatrix)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glPushMatrix();  
	}
	else {
		stub_funcs.ptr_ms_glPushMatrix(); 
	}}
void (glPopMatrix)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glPopMatrix();  
	}
	else {
		stub_funcs.ptr_ms_glPopMatrix(); 
	}}
void (glLoadIdentity)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadIdentity();  
	}
	else {
		stub_funcs.ptr_ms_glLoadIdentity(); 
	}}
void (glLoadMatrixd)(const GLdouble * m) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadMatrixd(m);  
	}
	else {
		stub_funcs.ptr_ms_glLoadMatrixd(m); 
	}}
void (glLoadMatrixf)(const GLfloat * m) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadMatrixf(m);  
	}
	else {
		stub_funcs.ptr_ms_glLoadMatrixf(m); 
	}}
void (glMultMatrixd)(const GLdouble * m) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultMatrixd(m);  
	}
	else {
		stub_funcs.ptr_ms_glMultMatrixd(m); 
	}}
void (glMultMatrixf)(const GLfloat * m) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultMatrixf(m);  
	}
	else {
		stub_funcs.ptr_ms_glMultMatrixf(m); 
	}}
void (glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRotated(angle, x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRotated(angle, x, y, z); 
	}}
void (glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRotatef(angle, x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRotatef(angle, x, y, z); 
	}}
void (glScaled)(GLdouble x, GLdouble y, GLdouble z) { 
	if((IsLinux())){
		stub_funcs.ptr_glScaled(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glScaled(x, y, z); 
	}}
void (glScalef)(GLfloat x, GLfloat y, GLfloat z) { 
	if((IsLinux())){
		stub_funcs.ptr_glScalef(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glScalef(x, y, z); 
	}}
void (glTranslated)(GLdouble x, GLdouble y, GLdouble z) { 
	if((IsLinux())){
		stub_funcs.ptr_glTranslated(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glTranslated(x, y, z); 
	}}
void (glTranslatef)(GLfloat x, GLfloat y, GLfloat z) { 
	if((IsLinux())){
		stub_funcs.ptr_glTranslatef(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glTranslatef(x, y, z); 
	}}
GLboolean (glIsList)(GLuint list) { 
	if((IsLinux())){
		return stub_funcs.ptr_glIsList(list);  
	}
	else {
		return stub_funcs.ptr_ms_glIsList(list); 
	}}
void (glDeleteLists)(GLuint list, GLsizei range) { 
	if((IsLinux())){
		stub_funcs.ptr_glDeleteLists(list, range);  
	}
	else {
		stub_funcs.ptr_ms_glDeleteLists(list, range); 
	}}
GLuint (glGenLists)(GLsizei range) { 
	if((IsLinux())){
		return stub_funcs.ptr_glGenLists(range);  
	}
	else {
		return stub_funcs.ptr_ms_glGenLists(range); 
	}}
void (glNewList)(GLuint list, GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glNewList(list, mode);  
	}
	else {
		stub_funcs.ptr_ms_glNewList(list, mode); 
	}}
void (glEndList)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glEndList();  
	}
	else {
		stub_funcs.ptr_ms_glEndList(); 
	}}
void (glCallList)(GLuint list) { 
	if((IsLinux())){
		stub_funcs.ptr_glCallList(list);  
	}
	else {
		stub_funcs.ptr_ms_glCallList(list); 
	}}
void (glCallLists)(GLsizei n, GLenum type, const GLvoid * lists) { 
	if((IsLinux())){
		stub_funcs.ptr_glCallLists(n, type, lists);  
	}
	else {
		stub_funcs.ptr_ms_glCallLists(n, type, lists); 
	}}
void (glListBase)(GLuint base) { 
	if((IsLinux())){
		stub_funcs.ptr_glListBase(base);  
	}
	else {
		stub_funcs.ptr_ms_glListBase(base); 
	}}
void (glBegin)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glBegin(mode);  
	}
	else {
		stub_funcs.ptr_ms_glBegin(mode); 
	}}
void (glEnd)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glEnd();  
	}
	else {
		stub_funcs.ptr_ms_glEnd(); 
	}}
void (glVertex2d)(GLdouble x, GLdouble y) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2d(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2d(x, y); 
	}}
void (glVertex2f)(GLfloat x, GLfloat y) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2f(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2f(x, y); 
	}}
void (glVertex2i)(GLint x, GLint y) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2i(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2i(x, y); 
	}}
void (glVertex2s)(GLshort x, GLshort y) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2s(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2s(x, y); 
	}}
void (glVertex3d)(GLdouble x, GLdouble y, GLdouble z) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3d(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3d(x, y, z); 
	}}
void (glVertex3f)(GLfloat x, GLfloat y, GLfloat z) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3f(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3f(x, y, z); 
	}}
void (glVertex3i)(GLint x, GLint y, GLint z) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3i(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3i(x, y, z); 
	}}
void (glVertex3s)(GLshort x, GLshort y, GLshort z) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3s(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3s(x, y, z); 
	}}
void (glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4d(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4d(x, y, z, w); 
	}}
void (glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4f(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4f(x, y, z, w); 
	}}
void (glVertex4i)(GLint x, GLint y, GLint z, GLint w) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4i(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4i(x, y, z, w); 
	}}
void (glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4s(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4s(x, y, z, w); 
	}}
void (glVertex2dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2dv(v); 
	}}
void (glVertex2fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2fv(v); 
	}}
void (glVertex2iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2iv(v); 
	}}
void (glVertex2sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex2sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex2sv(v); 
	}}
void (glVertex3dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3dv(v); 
	}}
void (glVertex3fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3fv(v); 
	}}
void (glVertex3iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3iv(v); 
	}}
void (glVertex3sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex3sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex3sv(v); 
	}}
void (glVertex4dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4dv(v); 
	}}
void (glVertex4fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4fv(v); 
	}}
void (glVertex4iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4iv(v); 
	}}
void (glVertex4sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertex4sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glVertex4sv(v); 
	}}
void (glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3b(nx, ny, nz);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3b(nx, ny, nz); 
	}}
void (glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3d(nx, ny, nz);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3d(nx, ny, nz); 
	}}
void (glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3f(nx, ny, nz);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3f(nx, ny, nz); 
	}}
void (glNormal3i)(GLint nx, GLint ny, GLint nz) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3i(nx, ny, nz);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3i(nx, ny, nz); 
	}}
void (glNormal3s)(GLshort nx, GLshort ny, GLshort nz) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3s(nx, ny, nz);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3s(nx, ny, nz); 
	}}
void (glNormal3bv)(const GLbyte * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3bv(v);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3bv(v); 
	}}
void (glNormal3dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3dv(v); 
	}}
void (glNormal3fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3fv(v); 
	}}
void (glNormal3iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3iv(v); 
	}}
void (glNormal3sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormal3sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glNormal3sv(v); 
	}}
void (glIndexd)(GLdouble c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexd(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexd(c); 
	}}
void (glIndexf)(GLfloat c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexf(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexf(c); 
	}}
void (glIndexi)(GLint c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexi(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexi(c); 
	}}
void (glIndexs)(GLshort c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexs(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexs(c); 
	}}
void (glIndexub)(GLubyte c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexub(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexub(c); 
	}}
void (glIndexdv)(const GLdouble * c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexdv(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexdv(c); 
	}}
void (glIndexfv)(const GLfloat * c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexfv(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexfv(c); 
	}}
void (glIndexiv)(const GLint * c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexiv(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexiv(c); 
	}}
void (glIndexsv)(const GLshort * c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexsv(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexsv(c); 
	}}
void (glIndexubv)(const GLubyte * c) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexubv(c);  
	}
	else {
		stub_funcs.ptr_ms_glIndexubv(c); 
	}}
void (glColor3b)(GLbyte red, GLbyte green, GLbyte blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3b(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3b(red, green, blue); 
	}}
void (glColor3d)(GLdouble red, GLdouble green, GLdouble blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3d(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3d(red, green, blue); 
	}}
void (glColor3f)(GLfloat red, GLfloat green, GLfloat blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3f(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3f(red, green, blue); 
	}}
void (glColor3i)(GLint red, GLint green, GLint blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3i(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3i(red, green, blue); 
	}}
void (glColor3s)(GLshort red, GLshort green, GLshort blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3s(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3s(red, green, blue); 
	}}
void (glColor3ub)(GLubyte red, GLubyte green, GLubyte blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3ub(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3ub(red, green, blue); 
	}}
void (glColor3ui)(GLuint red, GLuint green, GLuint blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3ui(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3ui(red, green, blue); 
	}}
void (glColor3us)(GLushort red, GLushort green, GLushort blue) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3us(red, green, blue);  
	}
	else {
		stub_funcs.ptr_ms_glColor3us(red, green, blue); 
	}}
void (glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4b(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4b(red, green, blue, alpha); 
	}}
void (glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4d(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4d(red, green, blue, alpha); 
	}}
void (glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4f(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4f(red, green, blue, alpha); 
	}}
void (glColor4i)(GLint red, GLint green, GLint blue, GLint alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4i(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4i(red, green, blue, alpha); 
	}}
void (glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4s(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4s(red, green, blue, alpha); 
	}}
void (glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4ub(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4ub(red, green, blue, alpha); 
	}}
void (glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4ui(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4ui(red, green, blue, alpha); 
	}}
void (glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4us(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glColor4us(red, green, blue, alpha); 
	}}
void (glColor3bv)(const GLbyte * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3bv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3bv(v); 
	}}
void (glColor3dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3dv(v); 
	}}
void (glColor3fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3fv(v); 
	}}
void (glColor3iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3iv(v); 
	}}
void (glColor3sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3sv(v); 
	}}
void (glColor3ubv)(const GLubyte * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3ubv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3ubv(v); 
	}}
void (glColor3uiv)(const GLuint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3uiv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3uiv(v); 
	}}
void (glColor3usv)(const GLushort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor3usv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor3usv(v); 
	}}
void (glColor4bv)(const GLbyte * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4bv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4bv(v); 
	}}
void (glColor4dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4dv(v); 
	}}
void (glColor4fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4fv(v); 
	}}
void (glColor4iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4iv(v); 
	}}
void (glColor4sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4sv(v); 
	}}
void (glColor4ubv)(const GLubyte * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4ubv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4ubv(v); 
	}}
void (glColor4uiv)(const GLuint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4uiv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4uiv(v); 
	}}
void (glColor4usv)(const GLushort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glColor4usv(v);  
	}
	else {
		stub_funcs.ptr_ms_glColor4usv(v); 
	}}
void (glTexCoord1d)(GLdouble s) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1d(s);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1d(s); 
	}}
void (glTexCoord1f)(GLfloat s) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1f(s);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1f(s); 
	}}
void (glTexCoord1i)(GLint s) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1i(s);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1i(s); 
	}}
void (glTexCoord1s)(GLshort s) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1s(s);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1s(s); 
	}}
void (glTexCoord2d)(GLdouble s, GLdouble t) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2d(s, t);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2d(s, t); 
	}}
void (glTexCoord2f)(GLfloat s, GLfloat t) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2f(s, t);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2f(s, t); 
	}}
void (glTexCoord2i)(GLint s, GLint t) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2i(s, t);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2i(s, t); 
	}}
void (glTexCoord2s)(GLshort s, GLshort t) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2s(s, t);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2s(s, t); 
	}}
void (glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3d(s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3d(s, t, r); 
	}}
void (glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3f(s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3f(s, t, r); 
	}}
void (glTexCoord3i)(GLint s, GLint t, GLint r) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3i(s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3i(s, t, r); 
	}}
void (glTexCoord3s)(GLshort s, GLshort t, GLshort r) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3s(s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3s(s, t, r); 
	}}
void (glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4d(s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4d(s, t, r, q); 
	}}
void (glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4f(s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4f(s, t, r, q); 
	}}
void (glTexCoord4i)(GLint s, GLint t, GLint r, GLint q) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4i(s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4i(s, t, r, q); 
	}}
void (glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4s(s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4s(s, t, r, q); 
	}}
void (glTexCoord1dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1dv(v); 
	}}
void (glTexCoord1fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1fv(v); 
	}}
void (glTexCoord1iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1iv(v); 
	}}
void (glTexCoord1sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord1sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord1sv(v); 
	}}
void (glTexCoord2dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2dv(v); 
	}}
void (glTexCoord2fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2fv(v); 
	}}
void (glTexCoord2iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2iv(v); 
	}}
void (glTexCoord2sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord2sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord2sv(v); 
	}}
void (glTexCoord3dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3dv(v); 
	}}
void (glTexCoord3fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3fv(v); 
	}}
void (glTexCoord3iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3iv(v); 
	}}
void (glTexCoord3sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord3sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord3sv(v); 
	}}
void (glTexCoord4dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4dv(v); 
	}}
void (glTexCoord4fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4fv(v); 
	}}
void (glTexCoord4iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4iv(v); 
	}}
void (glTexCoord4sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoord4sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoord4sv(v); 
	}}
void (glRasterPos2d)(GLdouble x, GLdouble y) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2d(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2d(x, y); 
	}}
void (glRasterPos2f)(GLfloat x, GLfloat y) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2f(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2f(x, y); 
	}}
void (glRasterPos2i)(GLint x, GLint y) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2i(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2i(x, y); 
	}}
void (glRasterPos2s)(GLshort x, GLshort y) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2s(x, y);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2s(x, y); 
	}}
void (glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3d(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3d(x, y, z); 
	}}
void (glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3f(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3f(x, y, z); 
	}}
void (glRasterPos3i)(GLint x, GLint y, GLint z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3i(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3i(x, y, z); 
	}}
void (glRasterPos3s)(GLshort x, GLshort y, GLshort z) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3s(x, y, z);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3s(x, y, z); 
	}}
void (glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4d(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4d(x, y, z, w); 
	}}
void (glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4f(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4f(x, y, z, w); 
	}}
void (glRasterPos4i)(GLint x, GLint y, GLint z, GLint w) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4i(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4i(x, y, z, w); 
	}}
void (glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4s(x, y, z, w);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4s(x, y, z, w); 
	}}
void (glRasterPos2dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2dv(v); 
	}}
void (glRasterPos2fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2fv(v); 
	}}
void (glRasterPos2iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2iv(v); 
	}}
void (glRasterPos2sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos2sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos2sv(v); 
	}}
void (glRasterPos3dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3dv(v); 
	}}
void (glRasterPos3fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3fv(v); 
	}}
void (glRasterPos3iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3iv(v); 
	}}
void (glRasterPos3sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos3sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos3sv(v); 
	}}
void (glRasterPos4dv)(const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4dv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4dv(v); 
	}}
void (glRasterPos4fv)(const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4fv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4fv(v); 
	}}
void (glRasterPos4iv)(const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4iv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4iv(v); 
	}}
void (glRasterPos4sv)(const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glRasterPos4sv(v);  
	}
	else {
		stub_funcs.ptr_ms_glRasterPos4sv(v); 
	}}
void (glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectd(x1, y1, x2, y2);  
	}
	else {
		stub_funcs.ptr_ms_glRectd(x1, y1, x2, y2); 
	}}
void (glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectf(x1, y1, x2, y2);  
	}
	else {
		stub_funcs.ptr_ms_glRectf(x1, y1, x2, y2); 
	}}
void (glRecti)(GLint x1, GLint y1, GLint x2, GLint y2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRecti(x1, y1, x2, y2);  
	}
	else {
		stub_funcs.ptr_ms_glRecti(x1, y1, x2, y2); 
	}}
void (glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRects(x1, y1, x2, y2);  
	}
	else {
		stub_funcs.ptr_ms_glRects(x1, y1, x2, y2); 
	}}
void (glRectdv)(const GLdouble * v1, const GLdouble * v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectdv(v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glRectdv(v1, v2); 
	}}
void (glRectfv)(const GLfloat * v1, const GLfloat * v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectfv(v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glRectfv(v1, v2); 
	}}
void (glRectiv)(const GLint * v1, const GLint * v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectiv(v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glRectiv(v1, v2); 
	}}
void (glRectsv)(const GLshort * v1, const GLshort * v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glRectsv(v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glRectsv(v1, v2); 
	}}
void (glVertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glVertexPointer(size, type, stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glVertexPointer(size, type, stride, ptr); 
	}}
void (glNormalPointer)(GLenum type, GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glNormalPointer(type, stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glNormalPointer(type, stride, ptr); 
	}}
void (glColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorPointer(size, type, stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glColorPointer(size, type, stride, ptr); 
	}}
void (glIndexPointer)(GLenum type, GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glIndexPointer(type, stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glIndexPointer(type, stride, ptr); 
	}}
void (glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexCoordPointer(size, type, stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glTexCoordPointer(size, type, stride, ptr); 
	}}
void (glEdgeFlagPointer)(GLsizei stride, const GLvoid * ptr) { 
	if((IsLinux())){
		stub_funcs.ptr_glEdgeFlagPointer(stride, ptr);  
	}
	else {
		stub_funcs.ptr_ms_glEdgeFlagPointer(stride, ptr); 
	}}
void (glGetPointerv)(GLenum pname, GLvoid * * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetPointerv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetPointerv(pname, params); 
	}}
void (glArrayElement)(GLint i) { 
	if((IsLinux())){
		stub_funcs.ptr_glArrayElement(i);  
	}
	else {
		stub_funcs.ptr_ms_glArrayElement(i); 
	}}
void (glDrawArrays)(GLenum mode, GLint first, GLsizei count) { 
	if((IsLinux())){
		stub_funcs.ptr_glDrawArrays(mode, first, count);  
	}
	else {
		stub_funcs.ptr_ms_glDrawArrays(mode, first, count); 
	}}
void (glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) { 
	if((IsLinux())){
		stub_funcs.ptr_glDrawElements(mode, count, type, indices);  
	}
	else {
		stub_funcs.ptr_ms_glDrawElements(mode, count, type, indices); 
	}}
void (glInterleavedArrays)(GLenum format, GLsizei stride, const GLvoid * pointer) { 
	if((IsLinux())){
		stub_funcs.ptr_glInterleavedArrays(format, stride, pointer);  
	}
	else {
		stub_funcs.ptr_ms_glInterleavedArrays(format, stride, pointer); 
	}}
void (glShadeModel)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glShadeModel(mode);  
	}
	else {
		stub_funcs.ptr_ms_glShadeModel(mode); 
	}}
void (glLightf)(GLenum light, GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightf(light, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glLightf(light, pname, param); 
	}}
void (glLighti)(GLenum light, GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glLighti(light, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glLighti(light, pname, param); 
	}}
void (glLightfv)(GLenum light, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightfv(light, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glLightfv(light, pname, params); 
	}}
void (glLightiv)(GLenum light, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightiv(light, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glLightiv(light, pname, params); 
	}}
void (glGetLightfv)(GLenum light, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetLightfv(light, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetLightfv(light, pname, params); 
	}}
void (glGetLightiv)(GLenum light, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetLightiv(light, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetLightiv(light, pname, params); 
	}}
void (glLightModelf)(GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightModelf(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glLightModelf(pname, param); 
	}}
void (glLightModeli)(GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightModeli(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glLightModeli(pname, param); 
	}}
void (glLightModelfv)(GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightModelfv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glLightModelfv(pname, params); 
	}}
void (glLightModeliv)(GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glLightModeliv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glLightModeliv(pname, params); 
	}}
void (glMaterialf)(GLenum face, GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glMaterialf(face, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glMaterialf(face, pname, param); 
	}}
void (glMateriali)(GLenum face, GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glMateriali(face, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glMateriali(face, pname, param); 
	}}
void (glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glMaterialfv(face, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glMaterialfv(face, pname, params); 
	}}
void (glMaterialiv)(GLenum face, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glMaterialiv(face, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glMaterialiv(face, pname, params); 
	}}
void (glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMaterialfv(face, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetMaterialfv(face, pname, params); 
	}}
void (glGetMaterialiv)(GLenum face, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMaterialiv(face, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetMaterialiv(face, pname, params); 
	}}
void (glColorMaterial)(GLenum face, GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorMaterial(face, mode);  
	}
	else {
		stub_funcs.ptr_ms_glColorMaterial(face, mode); 
	}}
void (glPixelZoom)(GLfloat xfactor, GLfloat yfactor) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelZoom(xfactor, yfactor);  
	}
	else {
		stub_funcs.ptr_ms_glPixelZoom(xfactor, yfactor); 
	}}
void (glPixelStoref)(GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelStoref(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glPixelStoref(pname, param); 
	}}
void (glPixelStorei)(GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelStorei(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glPixelStorei(pname, param); 
	}}
void (glPixelTransferf)(GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelTransferf(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glPixelTransferf(pname, param); 
	}}
void (glPixelTransferi)(GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelTransferi(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glPixelTransferi(pname, param); 
	}}
void (glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelMapfv(map, mapsize, values);  
	}
	else {
		stub_funcs.ptr_ms_glPixelMapfv(map, mapsize, values); 
	}}
void (glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelMapuiv(map, mapsize, values);  
	}
	else {
		stub_funcs.ptr_ms_glPixelMapuiv(map, mapsize, values); 
	}}
void (glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glPixelMapusv(map, mapsize, values);  
	}
	else {
		stub_funcs.ptr_ms_glPixelMapusv(map, mapsize, values); 
	}}
void (glGetPixelMapfv)(GLenum map, GLfloat * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetPixelMapfv(map, values);  
	}
	else {
		stub_funcs.ptr_ms_glGetPixelMapfv(map, values); 
	}}
void (glGetPixelMapuiv)(GLenum map, GLuint * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetPixelMapuiv(map, values);  
	}
	else {
		stub_funcs.ptr_ms_glGetPixelMapuiv(map, values); 
	}}
void (glGetPixelMapusv)(GLenum map, GLushort * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetPixelMapusv(map, values);  
	}
	else {
		stub_funcs.ptr_ms_glGetPixelMapusv(map, values); 
	}}
void (glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) { 
	if((IsLinux())){
		stub_funcs.ptr_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);  
	}
	else {
		stub_funcs.ptr_ms_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap); 
	}}
void (glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glReadPixels(x, y, width, height, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glReadPixels(x, y, width, height, format, type, pixels); 
	}}
void (glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glDrawPixels(width, height, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glDrawPixels(width, height, format, type, pixels); 
	}}
void (glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyPixels(x, y, width, height, type);  
	}
	else {
		stub_funcs.ptr_ms_glCopyPixels(x, y, width, height, type); 
	}}
void (glStencilFunc)(GLenum func, GLint ref, GLuint mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glStencilFunc(func, ref, mask);  
	}
	else {
		stub_funcs.ptr_ms_glStencilFunc(func, ref, mask); 
	}}
void (glStencilMask)(GLuint mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glStencilMask(mask);  
	}
	else {
		stub_funcs.ptr_ms_glStencilMask(mask); 
	}}
void (glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass) { 
	if((IsLinux())){
		stub_funcs.ptr_glStencilOp(fail, zfail, zpass);  
	}
	else {
		stub_funcs.ptr_ms_glStencilOp(fail, zfail, zpass); 
	}}
void (glClearStencil)(GLint s) { 
	if((IsLinux())){
		stub_funcs.ptr_glClearStencil(s);  
	}
	else {
		stub_funcs.ptr_ms_glClearStencil(s); 
	}}
void (glTexGend)(GLenum coord, GLenum pname, GLdouble param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGend(coord, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexGend(coord, pname, param); 
	}}
void (glTexGenf)(GLenum coord, GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGenf(coord, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexGenf(coord, pname, param); 
	}}
void (glTexGeni)(GLenum coord, GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGeni(coord, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexGeni(coord, pname, param); 
	}}
void (glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGendv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexGendv(coord, pname, params); 
	}}
void (glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGenfv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexGenfv(coord, pname, params); 
	}}
void (glTexGeniv)(GLenum coord, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexGeniv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexGeniv(coord, pname, params); 
	}}
void (glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexGendv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexGendv(coord, pname, params); 
	}}
void (glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexGenfv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexGenfv(coord, pname, params); 
	}}
void (glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexGeniv(coord, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexGeniv(coord, pname, params); 
	}}
void (glTexEnvf)(GLenum target, GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexEnvf(target, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexEnvf(target, pname, param); 
	}}
void (glTexEnvi)(GLenum target, GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexEnvi(target, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexEnvi(target, pname, param); 
	}}
void (glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexEnvfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexEnvfv(target, pname, params); 
	}}
void (glTexEnviv)(GLenum target, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexEnviv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexEnviv(target, pname, params); 
	}}
void (glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexEnvfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexEnvfv(target, pname, params); 
	}}
void (glGetTexEnviv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexEnviv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexEnviv(target, pname, params); 
	}}
void (glTexParameterf)(GLenum target, GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexParameterf(target, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexParameterf(target, pname, param); 
	}}
void (glTexParameteri)(GLenum target, GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexParameteri(target, pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glTexParameteri(target, pname, param); 
	}}
void (glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexParameterfv(target, pname, params); 
	}}
void (glTexParameteriv)(GLenum target, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glTexParameteriv(target, pname, params); 
	}}
void (glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexParameterfv(target, pname, params); 
	}}
void (glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexParameteriv(target, pname, params); 
	}}
void (glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexLevelParameterfv(target, level, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexLevelParameterfv(target, level, pname, params); 
	}}
void (glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexLevelParameteriv(target, level, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexLevelParameteriv(target, level, pname, params); 
	}}
void (glTexImage1D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexImage1D(target, level, internalFormat, width, border, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexImage1D(target, level, internalFormat, width, border, format, type, pixels); 
	}}
void (glTexImage2D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexImage2D(target, level, internalFormat, width, height, border, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexImage2D(target, level, internalFormat, width, height, border, format, type, pixels); 
	}}
void (glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetTexImage(target, level, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glGetTexImage(target, level, format, type, pixels); 
	}}
void (glGenTextures)(GLsizei n, GLuint * textures) { 
	if((IsLinux())){
		stub_funcs.ptr_glGenTextures(n, textures);  
	}
	else {
		stub_funcs.ptr_ms_glGenTextures(n, textures); 
	}}
void (glDeleteTextures)(GLsizei n, const GLuint * textures) { 
	if((IsLinux())){
		stub_funcs.ptr_glDeleteTextures(n, textures);  
	}
	else {
		stub_funcs.ptr_ms_glDeleteTextures(n, textures); 
	}}
void (glBindTexture)(GLenum target, GLuint texture) { 
	if((IsLinux())){
		stub_funcs.ptr_glBindTexture(target, texture);  
	}
	else {
		stub_funcs.ptr_ms_glBindTexture(target, texture); 
	}}
void (glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLclampf * priorities) { 
	if((IsLinux())){
		stub_funcs.ptr_glPrioritizeTextures(n, textures, priorities);  
	}
	else {
		stub_funcs.ptr_ms_glPrioritizeTextures(n, textures, priorities); 
	}}
GLboolean (glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences) { 
	if((IsLinux())){
		return stub_funcs.ptr_glAreTexturesResident(n, textures, residences);  
	}
	else {
		return stub_funcs.ptr_ms_glAreTexturesResident(n, textures, residences); 
	}}
GLboolean (glIsTexture)(GLuint texture) { 
	if((IsLinux())){
		return stub_funcs.ptr_glIsTexture(texture);  
	}
	else {
		return stub_funcs.ptr_ms_glIsTexture(texture); 
	}}
void (glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexSubImage1D(target, level, xoffset, width, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexSubImage1D(target, level, xoffset, width, format, type, pixels); 
	}}
void (glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); 
	}}
void (glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyTexImage1D(target, level, internalformat, x, y, width, border);  
	}
	else {
		stub_funcs.ptr_ms_glCopyTexImage1D(target, level, internalformat, x, y, width, border); 
	}}
void (glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);  
	}
	else {
		stub_funcs.ptr_ms_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); 
	}}
void (glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyTexSubImage1D(target, level, xoffset, x, y, width);  
	}
	else {
		stub_funcs.ptr_ms_glCopyTexSubImage1D(target, level, xoffset, x, y, width); 
	}}
void (glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); 
	}}
void (glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) { 
	if((IsLinux())){
		stub_funcs.ptr_glMap1d(target, u1, u2, stride, order, points);  
	}
	else {
		stub_funcs.ptr_ms_glMap1d(target, u1, u2, stride, order, points); 
	}}
void (glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) { 
	if((IsLinux())){
		stub_funcs.ptr_glMap1f(target, u1, u2, stride, order, points);  
	}
	else {
		stub_funcs.ptr_ms_glMap1f(target, u1, u2, stride, order, points); 
	}}
void (glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) { 
	if((IsLinux())){
		stub_funcs.ptr_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);  
	}
	else {
		stub_funcs.ptr_ms_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); 
	}}
void (glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) { 
	if((IsLinux())){
		stub_funcs.ptr_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);  
	}
	else {
		stub_funcs.ptr_ms_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); 
	}}
void (glGetMapdv)(GLenum target, GLenum query, GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMapdv(target, query, v);  
	}
	else {
		stub_funcs.ptr_ms_glGetMapdv(target, query, v); 
	}}
void (glGetMapfv)(GLenum target, GLenum query, GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMapfv(target, query, v);  
	}
	else {
		stub_funcs.ptr_ms_glGetMapfv(target, query, v); 
	}}
void (glGetMapiv)(GLenum target, GLenum query, GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMapiv(target, query, v);  
	}
	else {
		stub_funcs.ptr_ms_glGetMapiv(target, query, v); 
	}}
void (glEvalCoord1d)(GLdouble u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord1d(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord1d(u); 
	}}
void (glEvalCoord1f)(GLfloat u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord1f(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord1f(u); 
	}}
void (glEvalCoord1dv)(const GLdouble * u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord1dv(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord1dv(u); 
	}}
void (glEvalCoord1fv)(const GLfloat * u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord1fv(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord1fv(u); 
	}}
void (glEvalCoord2d)(GLdouble u, GLdouble v) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord2d(u, v);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord2d(u, v); 
	}}
void (glEvalCoord2f)(GLfloat u, GLfloat v) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord2f(u, v);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord2f(u, v); 
	}}
void (glEvalCoord2dv)(const GLdouble * u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord2dv(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord2dv(u); 
	}}
void (glEvalCoord2fv)(const GLfloat * u) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalCoord2fv(u);  
	}
	else {
		stub_funcs.ptr_ms_glEvalCoord2fv(u); 
	}}
void (glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2) { 
	if((IsLinux())){
		stub_funcs.ptr_glMapGrid1d(un, u1, u2);  
	}
	else {
		stub_funcs.ptr_ms_glMapGrid1d(un, u1, u2); 
	}}
void (glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2) { 
	if((IsLinux())){
		stub_funcs.ptr_glMapGrid1f(un, u1, u2);  
	}
	else {
		stub_funcs.ptr_ms_glMapGrid1f(un, u1, u2); 
	}}
void (glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glMapGrid2d(un, u1, u2, vn, v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glMapGrid2d(un, u1, u2, vn, v1, v2); 
	}}
void (glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) { 
	if((IsLinux())){
		stub_funcs.ptr_glMapGrid2f(un, u1, u2, vn, v1, v2);  
	}
	else {
		stub_funcs.ptr_ms_glMapGrid2f(un, u1, u2, vn, v1, v2); 
	}}
void (glEvalPoint1)(GLint i) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalPoint1(i);  
	}
	else {
		stub_funcs.ptr_ms_glEvalPoint1(i); 
	}}
void (glEvalPoint2)(GLint i, GLint j) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalPoint2(i, j);  
	}
	else {
		stub_funcs.ptr_ms_glEvalPoint2(i, j); 
	}}
void (glEvalMesh1)(GLenum mode, GLint i1, GLint i2) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalMesh1(mode, i1, i2);  
	}
	else {
		stub_funcs.ptr_ms_glEvalMesh1(mode, i1, i2); 
	}}
void (glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) { 
	if((IsLinux())){
		stub_funcs.ptr_glEvalMesh2(mode, i1, i2, j1, j2);  
	}
	else {
		stub_funcs.ptr_ms_glEvalMesh2(mode, i1, i2, j1, j2); 
	}}
void (glFogf)(GLenum pname, GLfloat param) { 
	if((IsLinux())){
		stub_funcs.ptr_glFogf(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glFogf(pname, param); 
	}}
void (glFogi)(GLenum pname, GLint param) { 
	if((IsLinux())){
		stub_funcs.ptr_glFogi(pname, param);  
	}
	else {
		stub_funcs.ptr_ms_glFogi(pname, param); 
	}}
void (glFogfv)(GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glFogfv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glFogfv(pname, params); 
	}}
void (glFogiv)(GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glFogiv(pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glFogiv(pname, params); 
	}}
void (glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer) { 
	if((IsLinux())){
		stub_funcs.ptr_glFeedbackBuffer(size, type, buffer);  
	}
	else {
		stub_funcs.ptr_ms_glFeedbackBuffer(size, type, buffer); 
	}}
void (glPassThrough)(GLfloat token) { 
	if((IsLinux())){
		stub_funcs.ptr_glPassThrough(token);  
	}
	else {
		stub_funcs.ptr_ms_glPassThrough(token); 
	}}
void (glSelectBuffer)(GLsizei size, GLuint * buffer) { 
	if((IsLinux())){
		stub_funcs.ptr_glSelectBuffer(size, buffer);  
	}
	else {
		stub_funcs.ptr_ms_glSelectBuffer(size, buffer); 
	}}
void (glInitNames)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glInitNames();  
	}
	else {
		stub_funcs.ptr_ms_glInitNames(); 
	}}
void (glLoadName)(GLuint name) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadName(name);  
	}
	else {
		stub_funcs.ptr_ms_glLoadName(name); 
	}}
void (glPushName)(GLuint name) { 
	if((IsLinux())){
		stub_funcs.ptr_glPushName(name);  
	}
	else {
		stub_funcs.ptr_ms_glPushName(name); 
	}}
void (glPopName)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glPopName();  
	}
	else {
		stub_funcs.ptr_ms_glPopName(); 
	}}
void (glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices) { 
	if((IsLinux())){
		stub_funcs.ptr_glDrawRangeElements(mode, start, end, count, type, indices);  
	}
	else {
		stub_funcs.ptr_ms_glDrawRangeElements(mode, start, end, count, type, indices); 
	}}
void (glTexImage3D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels); 
	}}
void (glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels) { 
	if((IsLinux())){
		stub_funcs.ptr_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);  
	}
	else {
		stub_funcs.ptr_ms_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); 
	}}
void (glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height); 
	}}
void (glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorTable(target, internalformat, width, format, type, table);  
	}
	else {
		stub_funcs.ptr_ms_glColorTable(target, internalformat, width, format, type, table); 
	}}
void (glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorSubTable(target, start, count, format, type, data);  
	}
	else {
		stub_funcs.ptr_ms_glColorSubTable(target, start, count, format, type, data); 
	}}
void (glColorTableParameteriv)(GLenum target, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorTableParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glColorTableParameteriv(target, pname, params); 
	}}
void (glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glColorTableParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glColorTableParameterfv(target, pname, params); 
	}}
void (glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyColorSubTable(target, start, x, y, width);  
	}
	else {
		stub_funcs.ptr_ms_glCopyColorSubTable(target, start, x, y, width); 
	}}
void (glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyColorTable(target, internalformat, x, y, width);  
	}
	else {
		stub_funcs.ptr_ms_glCopyColorTable(target, internalformat, x, y, width); 
	}}
void (glGetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid * table) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetColorTable(target, format, type, table);  
	}
	else {
		stub_funcs.ptr_ms_glGetColorTable(target, format, type, table); 
	}}
void (glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetColorTableParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetColorTableParameterfv(target, pname, params); 
	}}
void (glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetColorTableParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetColorTableParameteriv(target, pname, params); 
	}}
void (glBlendEquation)(GLenum mode) { 
	if((IsLinux())){
		stub_funcs.ptr_glBlendEquation(mode);  
	}
	else {
		stub_funcs.ptr_ms_glBlendEquation(mode); 
	}}
void (glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { 
	if((IsLinux())){
		stub_funcs.ptr_glBlendColor(red, green, blue, alpha);  
	}
	else {
		stub_funcs.ptr_ms_glBlendColor(red, green, blue, alpha); 
	}}
void (glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) { 
	if((IsLinux())){
		stub_funcs.ptr_glHistogram(target, width, internalformat, sink);  
	}
	else {
		stub_funcs.ptr_ms_glHistogram(target, width, internalformat, sink); 
	}}
void (glResetHistogram)(GLenum target) { 
	if((IsLinux())){
		stub_funcs.ptr_glResetHistogram(target);  
	}
	else {
		stub_funcs.ptr_ms_glResetHistogram(target); 
	}}
void (glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetHistogram(target, reset, format, type, values);  
	}
	else {
		stub_funcs.ptr_ms_glGetHistogram(target, reset, format, type, values); 
	}}
void (glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetHistogramParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetHistogramParameterfv(target, pname, params); 
	}}
void (glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetHistogramParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetHistogramParameteriv(target, pname, params); 
	}}
void (glMinmax)(GLenum target, GLenum internalformat, GLboolean sink) { 
	if((IsLinux())){
		stub_funcs.ptr_glMinmax(target, internalformat, sink);  
	}
	else {
		stub_funcs.ptr_ms_glMinmax(target, internalformat, sink); 
	}}
void (glResetMinmax)(GLenum target) { 
	if((IsLinux())){
		stub_funcs.ptr_glResetMinmax(target);  
	}
	else {
		stub_funcs.ptr_ms_glResetMinmax(target); 
	}}
void (glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMinmax(target, reset, format, types, values);  
	}
	else {
		stub_funcs.ptr_ms_glGetMinmax(target, reset, format, types, values); 
	}}
void (glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMinmaxParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetMinmaxParameterfv(target, pname, params); 
	}}
void (glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetMinmaxParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetMinmaxParameteriv(target, pname, params); 
	}}
void (glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionFilter1D(target, internalformat, width, format, type, image);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionFilter1D(target, internalformat, width, format, type, image); 
	}}
void (glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionFilter2D(target, internalformat, width, height, format, type, image);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionFilter2D(target, internalformat, width, height, format, type, image); 
	}}
void (glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionParameterf(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionParameterf(target, pname, params); 
	}}
void (glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionParameterfv(target, pname, params); 
	}}
void (glConvolutionParameteri)(GLenum target, GLenum pname, GLint params) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionParameteri(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionParameteri(target, pname, params); 
	}}
void (glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glConvolutionParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glConvolutionParameteriv(target, pname, params); 
	}}
void (glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyConvolutionFilter1D(target, internalformat, x, y, width);  
	}
	else {
		stub_funcs.ptr_ms_glCopyConvolutionFilter1D(target, internalformat, x, y, width); 
	}}
void (glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) { 
	if((IsLinux())){
		stub_funcs.ptr_glCopyConvolutionFilter2D(target, internalformat, x, y, width, height);  
	}
	else {
		stub_funcs.ptr_ms_glCopyConvolutionFilter2D(target, internalformat, x, y, width, height); 
	}}
void (glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid * image) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetConvolutionFilter(target, format, type, image);  
	}
	else {
		stub_funcs.ptr_ms_glGetConvolutionFilter(target, format, type, image); 
	}}
void (glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetConvolutionParameterfv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetConvolutionParameterfv(target, pname, params); 
	}}
void (glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint * params) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetConvolutionParameteriv(target, pname, params);  
	}
	else {
		stub_funcs.ptr_ms_glGetConvolutionParameteriv(target, pname, params); 
	}}
void (glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column) { 
	if((IsLinux())){
		stub_funcs.ptr_glSeparableFilter2D(target, internalformat, width, height, format, type, row, column);  
	}
	else {
		stub_funcs.ptr_ms_glSeparableFilter2D(target, internalformat, width, height, format, type, row, column); 
	}}
void (glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetSeparableFilter(target, format, type, row, column, span);  
	}
	else {
		stub_funcs.ptr_ms_glGetSeparableFilter(target, format, type, row, column, span); 
	}}
void (glActiveTexture)(GLenum texture) { 
	if((IsLinux())){
		stub_funcs.ptr_glActiveTexture(texture);  
	}
	else {
		stub_funcs.ptr_ms_glActiveTexture(texture); 
	}}
void (glClientActiveTexture)(GLenum texture) { 
	if((IsLinux())){
		stub_funcs.ptr_glClientActiveTexture(texture);  
	}
	else {
		stub_funcs.ptr_ms_glClientActiveTexture(texture); 
	}}
void (glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data); 
	}}
void (glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); 
	}}
void (glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data); 
	}}
void (glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data); 
	}}
void (glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); 
	}}
void (glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data) { 
	if((IsLinux())){
		stub_funcs.ptr_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);  
	}
	else {
		stub_funcs.ptr_ms_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); 
	}}
void (glGetCompressedTexImage)(GLenum target, GLint lod, GLvoid * img) { 
	if((IsLinux())){
		stub_funcs.ptr_glGetCompressedTexImage(target, lod, img);  
	}
	else {
		stub_funcs.ptr_ms_glGetCompressedTexImage(target, lod, img); 
	}}
void (glMultiTexCoord1d)(GLenum target, GLdouble s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1d(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1d(target, s); 
	}}
void (glMultiTexCoord1dv)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1dv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1dv(target, v); 
	}}
void (glMultiTexCoord1f)(GLenum target, GLfloat s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1f(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1f(target, s); 
	}}
void (glMultiTexCoord1fv)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1fv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1fv(target, v); 
	}}
void (glMultiTexCoord1i)(GLenum target, GLint s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1i(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1i(target, s); 
	}}
void (glMultiTexCoord1iv)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1iv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1iv(target, v); 
	}}
void (glMultiTexCoord1s)(GLenum target, GLshort s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1s(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1s(target, s); 
	}}
void (glMultiTexCoord1sv)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1sv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1sv(target, v); 
	}}
void (glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2d(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2d(target, s, t); 
	}}
void (glMultiTexCoord2dv)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2dv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2dv(target, v); 
	}}
void (glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2f(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2f(target, s, t); 
	}}
void (glMultiTexCoord2fv)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2fv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2fv(target, v); 
	}}
void (glMultiTexCoord2i)(GLenum target, GLint s, GLint t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2i(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2i(target, s, t); 
	}}
void (glMultiTexCoord2iv)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2iv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2iv(target, v); 
	}}
void (glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2s(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2s(target, s, t); 
	}}
void (glMultiTexCoord2sv)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2sv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2sv(target, v); 
	}}
void (glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3d(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3d(target, s, t, r); 
	}}
void (glMultiTexCoord3dv)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3dv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3dv(target, v); 
	}}
void (glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3f(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3f(target, s, t, r); 
	}}
void (glMultiTexCoord3fv)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3fv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3fv(target, v); 
	}}
void (glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3i(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3i(target, s, t, r); 
	}}
void (glMultiTexCoord3iv)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3iv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3iv(target, v); 
	}}
void (glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3s(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3s(target, s, t, r); 
	}}
void (glMultiTexCoord3sv)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3sv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3sv(target, v); 
	}}
void (glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4d(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4d(target, s, t, r, q); 
	}}
void (glMultiTexCoord4dv)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4dv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4dv(target, v); 
	}}
void (glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4f(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4f(target, s, t, r, q); 
	}}
void (glMultiTexCoord4fv)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4fv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4fv(target, v); 
	}}
void (glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4i(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4i(target, s, t, r, q); 
	}}
void (glMultiTexCoord4iv)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4iv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4iv(target, v); 
	}}
void (glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4s(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4s(target, s, t, r, q); 
	}}
void (glMultiTexCoord4sv)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4sv(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4sv(target, v); 
	}}
void (glLoadTransposeMatrixd)(const GLdouble m[16]) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadTransposeMatrixd(m);  
	}
	else {
		stub_funcs.ptr_ms_glLoadTransposeMatrixd(m); 
	}}
void (glLoadTransposeMatrixf)(const GLfloat m[16]) { 
	if((IsLinux())){
		stub_funcs.ptr_glLoadTransposeMatrixf(m);  
	}
	else {
		stub_funcs.ptr_ms_glLoadTransposeMatrixf(m); 
	}}
void (glMultTransposeMatrixd)(const GLdouble m[16]) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultTransposeMatrixd(m);  
	}
	else {
		stub_funcs.ptr_ms_glMultTransposeMatrixd(m); 
	}}
void (glMultTransposeMatrixf)(const GLfloat m[16]) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultTransposeMatrixf(m);  
	}
	else {
		stub_funcs.ptr_ms_glMultTransposeMatrixf(m); 
	}}
void (glSampleCoverage)(GLclampf value, GLboolean invert) { 
	if((IsLinux())){
		stub_funcs.ptr_glSampleCoverage(value, invert);  
	}
	else {
		stub_funcs.ptr_ms_glSampleCoverage(value, invert); 
	}}
void (glActiveTextureARB)(GLenum texture) { 
	if((IsLinux())){
		stub_funcs.ptr_glActiveTextureARB(texture);  
	}
	else {
		stub_funcs.ptr_ms_glActiveTextureARB(texture); 
	}}
void (glClientActiveTextureARB)(GLenum texture) { 
	if((IsLinux())){
		stub_funcs.ptr_glClientActiveTextureARB(texture);  
	}
	else {
		stub_funcs.ptr_ms_glClientActiveTextureARB(texture); 
	}}
void (glMultiTexCoord1dARB)(GLenum target, GLdouble s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1dARB(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1dARB(target, s); 
	}}
void (glMultiTexCoord1dvARB)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1dvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1dvARB(target, v); 
	}}
void (glMultiTexCoord1fARB)(GLenum target, GLfloat s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1fARB(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1fARB(target, s); 
	}}
void (glMultiTexCoord1fvARB)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1fvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1fvARB(target, v); 
	}}
void (glMultiTexCoord1iARB)(GLenum target, GLint s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1iARB(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1iARB(target, s); 
	}}
void (glMultiTexCoord1ivARB)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1ivARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1ivARB(target, v); 
	}}
void (glMultiTexCoord1sARB)(GLenum target, GLshort s) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1sARB(target, s);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1sARB(target, s); 
	}}
void (glMultiTexCoord1svARB)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord1svARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord1svARB(target, v); 
	}}
void (glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2dARB(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2dARB(target, s, t); 
	}}
void (glMultiTexCoord2dvARB)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2dvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2dvARB(target, v); 
	}}
void (glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2fARB(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2fARB(target, s, t); 
	}}
void (glMultiTexCoord2fvARB)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2fvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2fvARB(target, v); 
	}}
void (glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2iARB(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2iARB(target, s, t); 
	}}
void (glMultiTexCoord2ivARB)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2ivARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2ivARB(target, v); 
	}}
void (glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2sARB(target, s, t);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2sARB(target, s, t); 
	}}
void (glMultiTexCoord2svARB)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord2svARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord2svARB(target, v); 
	}}
void (glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3dARB(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3dARB(target, s, t, r); 
	}}
void (glMultiTexCoord3dvARB)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3dvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3dvARB(target, v); 
	}}
void (glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3fARB(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3fARB(target, s, t, r); 
	}}
void (glMultiTexCoord3fvARB)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3fvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3fvARB(target, v); 
	}}
void (glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3iARB(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3iARB(target, s, t, r); 
	}}
void (glMultiTexCoord3ivARB)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3ivARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3ivARB(target, v); 
	}}
void (glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3sARB(target, s, t, r);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3sARB(target, s, t, r); 
	}}
void (glMultiTexCoord3svARB)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord3svARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord3svARB(target, v); 
	}}
void (glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4dARB(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4dARB(target, s, t, r, q); 
	}}
void (glMultiTexCoord4dvARB)(GLenum target, const GLdouble * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4dvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4dvARB(target, v); 
	}}
void (glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4fARB(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4fARB(target, s, t, r, q); 
	}}
void (glMultiTexCoord4fvARB)(GLenum target, const GLfloat * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4fvARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4fvARB(target, v); 
	}}
void (glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4iARB(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4iARB(target, s, t, r, q); 
	}}
void (glMultiTexCoord4ivARB)(GLenum target, const GLint * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4ivARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4ivARB(target, v); 
	}}
void (glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4sARB(target, s, t, r, q);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4sARB(target, s, t, r, q); 
	}}
void (glMultiTexCoord4svARB)(GLenum target, const GLshort * v) { 
	if((IsLinux())){
		stub_funcs.ptr_glMultiTexCoord4svARB(target, v);  
	}
	else {
		stub_funcs.ptr_ms_glMultiTexCoord4svARB(target, v); 
	}}
void (glBlendEquationSeparateATI)(GLenum modeRGB, GLenum modeA) { 
	if((IsLinux())){
		stub_funcs.ptr_glBlendEquationSeparateATI(modeRGB, modeA);  
	}
	else {
		stub_funcs.ptr_ms_glBlendEquationSeparateATI(modeRGB, modeA); 
	}}
XVisualInfo * (glXChooseVisual)(Display * dpy, int screen, int * attribList) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXChooseVisual(dpy, screen, attribList);  
	}
	else {
		return stub_funcs.ptr_ms_glXChooseVisual(dpy, screen, attribList); 
	}}
GLXContext (glXCreateContext)(Display * dpy, XVisualInfo * vis, GLXContext shareList, int direct) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreateContext(dpy, vis, shareList, direct);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreateContext(dpy, vis, shareList, direct); 
	}}
void (glXDestroyContext)(Display * dpy, GLXContext ctx) { 
	if((IsLinux())){
		stub_funcs.ptr_glXDestroyContext(dpy, ctx);  
	}
	else {
		stub_funcs.ptr_ms_glXDestroyContext(dpy, ctx); 
	}}
int (glXMakeCurrent)(Display * dpy, GLXDrawable drawable, GLXContext ctx) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXMakeCurrent(dpy, drawable, ctx);  
	}
	else {
		return stub_funcs.ptr_ms_glXMakeCurrent(dpy, drawable, ctx); 
	}}
void (glXCopyContext)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glXCopyContext(dpy, src, dst, mask);  
	}
	else {
		stub_funcs.ptr_ms_glXCopyContext(dpy, src, dst, mask); 
	}}
void (glXSwapBuffers)(Display * dpy, GLXDrawable drawable) { 
	if((IsLinux())){
		stub_funcs.ptr_glXSwapBuffers(dpy, drawable);  
	}
	else {
		stub_funcs.ptr_ms_glXSwapBuffers(dpy, drawable); 
	}}
GLXPixmap (glXCreateGLXPixmap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreateGLXPixmap(dpy, visual, pixmap);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreateGLXPixmap(dpy, visual, pixmap); 
	}}
void (glXDestroyGLXPixmap)(Display * dpy, GLXPixmap pixmap) { 
	if((IsLinux())){
		stub_funcs.ptr_glXDestroyGLXPixmap(dpy, pixmap);  
	}
	else {
		stub_funcs.ptr_ms_glXDestroyGLXPixmap(dpy, pixmap); 
	}}
int (glXQueryExtension)(Display * dpy, int * errorb, int * event) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryExtension(dpy, errorb, event);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryExtension(dpy, errorb, event); 
	}}
int (glXQueryVersion)(Display * dpy, int * maj, int * min) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryVersion(dpy, maj, min);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryVersion(dpy, maj, min); 
	}}
int (glXIsDirect)(Display * dpy, GLXContext ctx) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXIsDirect(dpy, ctx);  
	}
	else {
		return stub_funcs.ptr_ms_glXIsDirect(dpy, ctx); 
	}}
int (glXGetConfig)(Display * dpy, XVisualInfo * visual, int attrib, int * value) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetConfig(dpy, visual, attrib, value);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetConfig(dpy, visual, attrib, value); 
	}}
GLXContext (glXGetCurrentContext)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetCurrentContext();  
	}
	else {
		return stub_funcs.ptr_ms_glXGetCurrentContext(); 
	}}
GLXDrawable (glXGetCurrentDrawable)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetCurrentDrawable();  
	}
	else {
		return stub_funcs.ptr_ms_glXGetCurrentDrawable(); 
	}}
void (glXWaitGL)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glXWaitGL();  
	}
	else {
		stub_funcs.ptr_ms_glXWaitGL(); 
	}}
void (glXWaitX)(void) { 
	if((IsLinux())){
		stub_funcs.ptr_glXWaitX();  
	}
	else {
		stub_funcs.ptr_ms_glXWaitX(); 
	}}
void (glXUseXFont)(Font font, int first, int count, int list) { 
	if((IsLinux())){
		stub_funcs.ptr_glXUseXFont(font, first, count, list);  
	}
	else {
		stub_funcs.ptr_ms_glXUseXFont(font, first, count, list); 
	}}
const char * (glXQueryExtensionsString)(Display * dpy, int screen) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryExtensionsString(dpy, screen);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryExtensionsString(dpy, screen); 
	}}
const char * (glXQueryServerString)(Display * dpy, int screen, int name) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryServerString(dpy, screen, name);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryServerString(dpy, screen, name); 
	}}
const char * (glXGetClientString)(Display * dpy, int name) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetClientString(dpy, name);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetClientString(dpy, name); 
	}}
Display * (glXGetCurrentDisplay)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetCurrentDisplay();  
	}
	else {
		return stub_funcs.ptr_ms_glXGetCurrentDisplay(); 
	}}
GLXFBConfig * (glXChooseFBConfig)(Display * dpy, int screen, const int * attribList, int * nitems) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXChooseFBConfig(dpy, screen, attribList, nitems);  
	}
	else {
		return stub_funcs.ptr_ms_glXChooseFBConfig(dpy, screen, attribList, nitems); 
	}}
int (glXGetFBConfigAttrib)(Display * dpy, GLXFBConfig config, int attribute, int * value) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetFBConfigAttrib(dpy, config, attribute, value);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetFBConfigAttrib(dpy, config, attribute, value); 
	}}
GLXFBConfig * (glXGetFBConfigs)(Display * dpy, int screen, int * nelements) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetFBConfigs(dpy, screen, nelements);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetFBConfigs(dpy, screen, nelements); 
	}}
XVisualInfo * (glXGetVisualFromFBConfig)(Display * dpy, GLXFBConfig config) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetVisualFromFBConfig(dpy, config);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetVisualFromFBConfig(dpy, config); 
	}}
GLXWindow (glXCreateWindow)(Display * dpy, GLXFBConfig config, Window win, const int * attribList) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreateWindow(dpy, config, win, attribList);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreateWindow(dpy, config, win, attribList); 
	}}
void (glXDestroyWindow)(Display * dpy, GLXWindow window) { 
	if((IsLinux())){
		stub_funcs.ptr_glXDestroyWindow(dpy, window);  
	}
	else {
		stub_funcs.ptr_ms_glXDestroyWindow(dpy, window); 
	}}
GLXPixmap (glXCreatePixmap)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attribList) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreatePixmap(dpy, config, pixmap, attribList);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreatePixmap(dpy, config, pixmap, attribList); 
	}}
void (glXDestroyPixmap)(Display * dpy, GLXPixmap pixmap) { 
	if((IsLinux())){
		stub_funcs.ptr_glXDestroyPixmap(dpy, pixmap);  
	}
	else {
		stub_funcs.ptr_ms_glXDestroyPixmap(dpy, pixmap); 
	}}
GLXPbuffer (glXCreatePbuffer)(Display * dpy, GLXFBConfig config, const int * attribList) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreatePbuffer(dpy, config, attribList);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreatePbuffer(dpy, config, attribList); 
	}}
void (glXDestroyPbuffer)(Display * dpy, GLXPbuffer pbuf) { 
	if((IsLinux())){
		stub_funcs.ptr_glXDestroyPbuffer(dpy, pbuf);  
	}
	else {
		stub_funcs.ptr_ms_glXDestroyPbuffer(dpy, pbuf); 
	}}
void (glXQueryDrawable)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value) { 
	if((IsLinux())){
		stub_funcs.ptr_glXQueryDrawable(dpy, draw, attribute, value);  
	}
	else {
		stub_funcs.ptr_ms_glXQueryDrawable(dpy, draw, attribute, value); 
	}}
GLXContext (glXCreateNewContext)(Display * dpy, GLXFBConfig config, int renderType, GLXContext shareList, int direct) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXCreateNewContext(dpy, config, renderType, shareList, direct);  
	}
	else {
		return stub_funcs.ptr_ms_glXCreateNewContext(dpy, config, renderType, shareList, direct); 
	}}
int (glXMakeContextCurrent)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXMakeContextCurrent(dpy, draw, read, ctx);  
	}
	else {
		return stub_funcs.ptr_ms_glXMakeContextCurrent(dpy, draw, read, ctx); 
	}}
GLXDrawable (glXGetCurrentReadDrawable)(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetCurrentReadDrawable();  
	}
	else {
		return stub_funcs.ptr_ms_glXGetCurrentReadDrawable(); 
	}}
int (glXQueryContext)(Display * dpy, GLXContext ctx, int attribute, int * value) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryContext(dpy, ctx, attribute, value);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryContext(dpy, ctx, attribute, value); 
	}}
void (glXSelectEvent)(Display * dpy, GLXDrawable drawable, unsigned long mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glXSelectEvent(dpy, drawable, mask);  
	}
	else {
		stub_funcs.ptr_ms_glXSelectEvent(dpy, drawable, mask); 
	}}
void (glXGetSelectedEvent)(Display * dpy, GLXDrawable drawable, unsigned long * mask) { 
	if((IsLinux())){
		stub_funcs.ptr_glXGetSelectedEvent(dpy, drawable, mask);  
	}
	else {
		stub_funcs.ptr_ms_glXGetSelectedEvent(dpy, drawable, mask); 
	}}
__GLXextFuncPtr (glXGetProcAddressARB)(const GLubyte * _1) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetProcAddressARB(_1);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetProcAddressARB(_1); 
	}}
void (*glXGetProcAddress(const GLubyte * procname))(void) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetProcAddress(procname);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetProcAddress(procname); 
	}}
void * (glXAllocateMemoryNV)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXAllocateMemoryNV(size, readfreq, writefreq, priority);  
	}
	else {
		return stub_funcs.ptr_ms_glXAllocateMemoryNV(size, readfreq, writefreq, priority); 
	}}
void (glXFreeMemoryNV)(GLvoid * pointer) { 
	if((IsLinux())){
		stub_funcs.ptr_glXFreeMemoryNV(pointer);  
	}
	else {
		stub_funcs.ptr_ms_glXFreeMemoryNV(pointer); 
	}}
int (glXBindTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXBindTexImageARB(dpy, pbuffer, buffer);  
	}
	else {
		return stub_funcs.ptr_ms_glXBindTexImageARB(dpy, pbuffer, buffer); 
	}}
int (glXReleaseTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXReleaseTexImageARB(dpy, pbuffer, buffer);  
	}
	else {
		return stub_funcs.ptr_ms_glXReleaseTexImageARB(dpy, pbuffer, buffer); 
	}}
int (glXDrawableAttribARB)(Display * dpy, GLXDrawable draw, const int * attribList) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXDrawableAttribARB(dpy, draw, attribList);  
	}
	else {
		return stub_funcs.ptr_ms_glXDrawableAttribARB(dpy, draw, attribList); 
	}}
int (glXGetFrameUsageMESA)(Display * dpy, GLXDrawable drawable, float * usage) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXGetFrameUsageMESA(dpy, drawable, usage);  
	}
	else {
		return stub_funcs.ptr_ms_glXGetFrameUsageMESA(dpy, drawable, usage); 
	}}
int (glXBeginFrameTrackingMESA)(Display * dpy, GLXDrawable drawable) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXBeginFrameTrackingMESA(dpy, drawable);  
	}
	else {
		return stub_funcs.ptr_ms_glXBeginFrameTrackingMESA(dpy, drawable); 
	}}
int (glXEndFrameTrackingMESA)(Display * dpy, GLXDrawable drawable) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXEndFrameTrackingMESA(dpy, drawable);  
	}
	else {
		return stub_funcs.ptr_ms_glXEndFrameTrackingMESA(dpy, drawable); 
	}}
int (glXQueryFrameTrackingMESA)(Display * dpy, GLXDrawable drawable, int64_t * swapCount, int64_t * missedFrames, float * lastMissedUsage) { 
	if((IsLinux())){
		return stub_funcs.ptr_glXQueryFrameTrackingMESA(dpy, drawable, swapCount, missedFrames, lastMissedUsage);  
	}
	else {
		return stub_funcs.ptr_ms_glXQueryFrameTrackingMESA(dpy, drawable, swapCount, missedFrames, lastMissedUsage); 
	}}

void close_opengl(void) {
    cosmo_dlclose(opengl);
}