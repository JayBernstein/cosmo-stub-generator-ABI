#include "opengl_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

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
}

void (glClearIndex)(GLfloat c) { stub_funcs.ptr_glClearIndex(c); }
void (glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { stub_funcs.ptr_glClearColor(red, green, blue, alpha); }
void (glClear)(GLbitfield mask) { stub_funcs.ptr_glClear(mask); }
void (glIndexMask)(GLuint mask) { stub_funcs.ptr_glIndexMask(mask); }
void (glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) { stub_funcs.ptr_glColorMask(red, green, blue, alpha); }
void (glAlphaFunc)(GLenum func, GLclampf ref) { stub_funcs.ptr_glAlphaFunc(func, ref); }
void (glBlendFunc)(GLenum sfactor, GLenum dfactor) { stub_funcs.ptr_glBlendFunc(sfactor, dfactor); }
void (glLogicOp)(GLenum opcode) { stub_funcs.ptr_glLogicOp(opcode); }
void (glCullFace)(GLenum mode) { stub_funcs.ptr_glCullFace(mode); }
void (glFrontFace)(GLenum mode) { stub_funcs.ptr_glFrontFace(mode); }
void (glPointSize)(GLfloat size) { stub_funcs.ptr_glPointSize(size); }
void (glLineWidth)(GLfloat width) { stub_funcs.ptr_glLineWidth(width); }
void (glLineStipple)(GLint factor, GLushort pattern) { stub_funcs.ptr_glLineStipple(factor, pattern); }
void (glPolygonMode)(GLenum face, GLenum mode) { stub_funcs.ptr_glPolygonMode(face, mode); }
void (glPolygonOffset)(GLfloat factor, GLfloat units) { stub_funcs.ptr_glPolygonOffset(factor, units); }
void (glPolygonStipple)(const GLubyte * mask) { stub_funcs.ptr_glPolygonStipple(mask); }
void (glGetPolygonStipple)(GLubyte * mask) { stub_funcs.ptr_glGetPolygonStipple(mask); }
void (glEdgeFlag)(GLboolean flag) { stub_funcs.ptr_glEdgeFlag(flag); }
void (glEdgeFlagv)(const GLboolean * flag) { stub_funcs.ptr_glEdgeFlagv(flag); }
void (glScissor)(GLint x, GLint y, GLsizei width, GLsizei height) { stub_funcs.ptr_glScissor(x, y, width, height); }
void (glClipPlane)(GLenum plane, const GLdouble * equation) { stub_funcs.ptr_glClipPlane(plane, equation); }
void (glGetClipPlane)(GLenum plane, GLdouble * equation) { stub_funcs.ptr_glGetClipPlane(plane, equation); }
void (glDrawBuffer)(GLenum mode) { stub_funcs.ptr_glDrawBuffer(mode); }
void (glReadBuffer)(GLenum mode) { stub_funcs.ptr_glReadBuffer(mode); }
void (glEnable)(GLenum cap) { stub_funcs.ptr_glEnable(cap); }
void (glDisable)(GLenum cap) { stub_funcs.ptr_glDisable(cap); }
GLboolean (glIsEnabled)(GLenum cap) { return stub_funcs.ptr_glIsEnabled(cap); }
void (glEnableClientState)(GLenum cap) { stub_funcs.ptr_glEnableClientState(cap); }
void (glDisableClientState)(GLenum cap) { stub_funcs.ptr_glDisableClientState(cap); }
void (glGetBooleanv)(GLenum pname, GLboolean * params) { stub_funcs.ptr_glGetBooleanv(pname, params); }
void (glGetDoublev)(GLenum pname, GLdouble * params) { stub_funcs.ptr_glGetDoublev(pname, params); }
void (glGetFloatv)(GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetFloatv(pname, params); }
void (glGetIntegerv)(GLenum pname, GLint * params) { stub_funcs.ptr_glGetIntegerv(pname, params); }
void (glPushAttrib)(GLbitfield mask) { stub_funcs.ptr_glPushAttrib(mask); }
void (glPopAttrib)(void) { stub_funcs.ptr_glPopAttrib(); }
void (glPushClientAttrib)(GLbitfield mask) { stub_funcs.ptr_glPushClientAttrib(mask); }
void (glPopClientAttrib)(void) { stub_funcs.ptr_glPopClientAttrib(); }
GLint (glRenderMode)(GLenum mode) { return stub_funcs.ptr_glRenderMode(mode); }
GLenum (glGetError)(void) { return stub_funcs.ptr_glGetError(); }
const GLubyte * (glGetString)(GLenum name) { return stub_funcs.ptr_glGetString(name); }
void (glFinish)(void) { stub_funcs.ptr_glFinish(); }
void (glFlush)(void) { stub_funcs.ptr_glFlush(); }
void (glHint)(GLenum target, GLenum mode) { stub_funcs.ptr_glHint(target, mode); }
void (glClearDepth)(GLclampd depth) { stub_funcs.ptr_glClearDepth(depth); }
void (glDepthFunc)(GLenum func) { stub_funcs.ptr_glDepthFunc(func); }
void (glDepthMask)(GLboolean flag) { stub_funcs.ptr_glDepthMask(flag); }
void (glDepthRange)(GLclampd near_val, GLclampd far_val) { stub_funcs.ptr_glDepthRange(near_val, far_val); }
void (glClearAccum)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { stub_funcs.ptr_glClearAccum(red, green, blue, alpha); }
void (glAccum)(GLenum op, GLfloat value) { stub_funcs.ptr_glAccum(op, value); }
void (glMatrixMode)(GLenum mode) { stub_funcs.ptr_glMatrixMode(mode); }
void (glOrtho)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val) { stub_funcs.ptr_glOrtho(left, right, bottom, top, near_val, far_val); }
void (glFrustum)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val) { stub_funcs.ptr_glFrustum(left, right, bottom, top, near_val, far_val); }
void (glViewport)(GLint x, GLint y, GLsizei width, GLsizei height) { stub_funcs.ptr_glViewport(x, y, width, height); }
void (glPushMatrix)(void) { stub_funcs.ptr_glPushMatrix(); }
void (glPopMatrix)(void) { stub_funcs.ptr_glPopMatrix(); }
void (glLoadIdentity)(void) { stub_funcs.ptr_glLoadIdentity(); }
void (glLoadMatrixd)(const GLdouble * m) { stub_funcs.ptr_glLoadMatrixd(m); }
void (glLoadMatrixf)(const GLfloat * m) { stub_funcs.ptr_glLoadMatrixf(m); }
void (glMultMatrixd)(const GLdouble * m) { stub_funcs.ptr_glMultMatrixd(m); }
void (glMultMatrixf)(const GLfloat * m) { stub_funcs.ptr_glMultMatrixf(m); }
void (glRotated)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z) { stub_funcs.ptr_glRotated(angle, x, y, z); }
void (glRotatef)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z) { stub_funcs.ptr_glRotatef(angle, x, y, z); }
void (glScaled)(GLdouble x, GLdouble y, GLdouble z) { stub_funcs.ptr_glScaled(x, y, z); }
void (glScalef)(GLfloat x, GLfloat y, GLfloat z) { stub_funcs.ptr_glScalef(x, y, z); }
void (glTranslated)(GLdouble x, GLdouble y, GLdouble z) { stub_funcs.ptr_glTranslated(x, y, z); }
void (glTranslatef)(GLfloat x, GLfloat y, GLfloat z) { stub_funcs.ptr_glTranslatef(x, y, z); }
GLboolean (glIsList)(GLuint list) { return stub_funcs.ptr_glIsList(list); }
void (glDeleteLists)(GLuint list, GLsizei range) { stub_funcs.ptr_glDeleteLists(list, range); }
GLuint (glGenLists)(GLsizei range) { return stub_funcs.ptr_glGenLists(range); }
void (glNewList)(GLuint list, GLenum mode) { stub_funcs.ptr_glNewList(list, mode); }
void (glEndList)(void) { stub_funcs.ptr_glEndList(); }
void (glCallList)(GLuint list) { stub_funcs.ptr_glCallList(list); }
void (glCallLists)(GLsizei n, GLenum type, const GLvoid * lists) { stub_funcs.ptr_glCallLists(n, type, lists); }
void (glListBase)(GLuint base) { stub_funcs.ptr_glListBase(base); }
void (glBegin)(GLenum mode) { stub_funcs.ptr_glBegin(mode); }
void (glEnd)(void) { stub_funcs.ptr_glEnd(); }
void (glVertex2d)(GLdouble x, GLdouble y) { stub_funcs.ptr_glVertex2d(x, y); }
void (glVertex2f)(GLfloat x, GLfloat y) { stub_funcs.ptr_glVertex2f(x, y); }
void (glVertex2i)(GLint x, GLint y) { stub_funcs.ptr_glVertex2i(x, y); }
void (glVertex2s)(GLshort x, GLshort y) { stub_funcs.ptr_glVertex2s(x, y); }
void (glVertex3d)(GLdouble x, GLdouble y, GLdouble z) { stub_funcs.ptr_glVertex3d(x, y, z); }
void (glVertex3f)(GLfloat x, GLfloat y, GLfloat z) { stub_funcs.ptr_glVertex3f(x, y, z); }
void (glVertex3i)(GLint x, GLint y, GLint z) { stub_funcs.ptr_glVertex3i(x, y, z); }
void (glVertex3s)(GLshort x, GLshort y, GLshort z) { stub_funcs.ptr_glVertex3s(x, y, z); }
void (glVertex4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { stub_funcs.ptr_glVertex4d(x, y, z, w); }
void (glVertex4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { stub_funcs.ptr_glVertex4f(x, y, z, w); }
void (glVertex4i)(GLint x, GLint y, GLint z, GLint w) { stub_funcs.ptr_glVertex4i(x, y, z, w); }
void (glVertex4s)(GLshort x, GLshort y, GLshort z, GLshort w) { stub_funcs.ptr_glVertex4s(x, y, z, w); }
void (glVertex2dv)(const GLdouble * v) { stub_funcs.ptr_glVertex2dv(v); }
void (glVertex2fv)(const GLfloat * v) { stub_funcs.ptr_glVertex2fv(v); }
void (glVertex2iv)(const GLint * v) { stub_funcs.ptr_glVertex2iv(v); }
void (glVertex2sv)(const GLshort * v) { stub_funcs.ptr_glVertex2sv(v); }
void (glVertex3dv)(const GLdouble * v) { stub_funcs.ptr_glVertex3dv(v); }
void (glVertex3fv)(const GLfloat * v) { stub_funcs.ptr_glVertex3fv(v); }
void (glVertex3iv)(const GLint * v) { stub_funcs.ptr_glVertex3iv(v); }
void (glVertex3sv)(const GLshort * v) { stub_funcs.ptr_glVertex3sv(v); }
void (glVertex4dv)(const GLdouble * v) { stub_funcs.ptr_glVertex4dv(v); }
void (glVertex4fv)(const GLfloat * v) { stub_funcs.ptr_glVertex4fv(v); }
void (glVertex4iv)(const GLint * v) { stub_funcs.ptr_glVertex4iv(v); }
void (glVertex4sv)(const GLshort * v) { stub_funcs.ptr_glVertex4sv(v); }
void (glNormal3b)(GLbyte nx, GLbyte ny, GLbyte nz) { stub_funcs.ptr_glNormal3b(nx, ny, nz); }
void (glNormal3d)(GLdouble nx, GLdouble ny, GLdouble nz) { stub_funcs.ptr_glNormal3d(nx, ny, nz); }
void (glNormal3f)(GLfloat nx, GLfloat ny, GLfloat nz) { stub_funcs.ptr_glNormal3f(nx, ny, nz); }
void (glNormal3i)(GLint nx, GLint ny, GLint nz) { stub_funcs.ptr_glNormal3i(nx, ny, nz); }
void (glNormal3s)(GLshort nx, GLshort ny, GLshort nz) { stub_funcs.ptr_glNormal3s(nx, ny, nz); }
void (glNormal3bv)(const GLbyte * v) { stub_funcs.ptr_glNormal3bv(v); }
void (glNormal3dv)(const GLdouble * v) { stub_funcs.ptr_glNormal3dv(v); }
void (glNormal3fv)(const GLfloat * v) { stub_funcs.ptr_glNormal3fv(v); }
void (glNormal3iv)(const GLint * v) { stub_funcs.ptr_glNormal3iv(v); }
void (glNormal3sv)(const GLshort * v) { stub_funcs.ptr_glNormal3sv(v); }
void (glIndexd)(GLdouble c) { stub_funcs.ptr_glIndexd(c); }
void (glIndexf)(GLfloat c) { stub_funcs.ptr_glIndexf(c); }
void (glIndexi)(GLint c) { stub_funcs.ptr_glIndexi(c); }
void (glIndexs)(GLshort c) { stub_funcs.ptr_glIndexs(c); }
void (glIndexub)(GLubyte c) { stub_funcs.ptr_glIndexub(c); }
void (glIndexdv)(const GLdouble * c) { stub_funcs.ptr_glIndexdv(c); }
void (glIndexfv)(const GLfloat * c) { stub_funcs.ptr_glIndexfv(c); }
void (glIndexiv)(const GLint * c) { stub_funcs.ptr_glIndexiv(c); }
void (glIndexsv)(const GLshort * c) { stub_funcs.ptr_glIndexsv(c); }
void (glIndexubv)(const GLubyte * c) { stub_funcs.ptr_glIndexubv(c); }
void (glColor3b)(GLbyte red, GLbyte green, GLbyte blue) { stub_funcs.ptr_glColor3b(red, green, blue); }
void (glColor3d)(GLdouble red, GLdouble green, GLdouble blue) { stub_funcs.ptr_glColor3d(red, green, blue); }
void (glColor3f)(GLfloat red, GLfloat green, GLfloat blue) { stub_funcs.ptr_glColor3f(red, green, blue); }
void (glColor3i)(GLint red, GLint green, GLint blue) { stub_funcs.ptr_glColor3i(red, green, blue); }
void (glColor3s)(GLshort red, GLshort green, GLshort blue) { stub_funcs.ptr_glColor3s(red, green, blue); }
void (glColor3ub)(GLubyte red, GLubyte green, GLubyte blue) { stub_funcs.ptr_glColor3ub(red, green, blue); }
void (glColor3ui)(GLuint red, GLuint green, GLuint blue) { stub_funcs.ptr_glColor3ui(red, green, blue); }
void (glColor3us)(GLushort red, GLushort green, GLushort blue) { stub_funcs.ptr_glColor3us(red, green, blue); }
void (glColor4b)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) { stub_funcs.ptr_glColor4b(red, green, blue, alpha); }
void (glColor4d)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) { stub_funcs.ptr_glColor4d(red, green, blue, alpha); }
void (glColor4f)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) { stub_funcs.ptr_glColor4f(red, green, blue, alpha); }
void (glColor4i)(GLint red, GLint green, GLint blue, GLint alpha) { stub_funcs.ptr_glColor4i(red, green, blue, alpha); }
void (glColor4s)(GLshort red, GLshort green, GLshort blue, GLshort alpha) { stub_funcs.ptr_glColor4s(red, green, blue, alpha); }
void (glColor4ub)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) { stub_funcs.ptr_glColor4ub(red, green, blue, alpha); }
void (glColor4ui)(GLuint red, GLuint green, GLuint blue, GLuint alpha) { stub_funcs.ptr_glColor4ui(red, green, blue, alpha); }
void (glColor4us)(GLushort red, GLushort green, GLushort blue, GLushort alpha) { stub_funcs.ptr_glColor4us(red, green, blue, alpha); }
void (glColor3bv)(const GLbyte * v) { stub_funcs.ptr_glColor3bv(v); }
void (glColor3dv)(const GLdouble * v) { stub_funcs.ptr_glColor3dv(v); }
void (glColor3fv)(const GLfloat * v) { stub_funcs.ptr_glColor3fv(v); }
void (glColor3iv)(const GLint * v) { stub_funcs.ptr_glColor3iv(v); }
void (glColor3sv)(const GLshort * v) { stub_funcs.ptr_glColor3sv(v); }
void (glColor3ubv)(const GLubyte * v) { stub_funcs.ptr_glColor3ubv(v); }
void (glColor3uiv)(const GLuint * v) { stub_funcs.ptr_glColor3uiv(v); }
void (glColor3usv)(const GLushort * v) { stub_funcs.ptr_glColor3usv(v); }
void (glColor4bv)(const GLbyte * v) { stub_funcs.ptr_glColor4bv(v); }
void (glColor4dv)(const GLdouble * v) { stub_funcs.ptr_glColor4dv(v); }
void (glColor4fv)(const GLfloat * v) { stub_funcs.ptr_glColor4fv(v); }
void (glColor4iv)(const GLint * v) { stub_funcs.ptr_glColor4iv(v); }
void (glColor4sv)(const GLshort * v) { stub_funcs.ptr_glColor4sv(v); }
void (glColor4ubv)(const GLubyte * v) { stub_funcs.ptr_glColor4ubv(v); }
void (glColor4uiv)(const GLuint * v) { stub_funcs.ptr_glColor4uiv(v); }
void (glColor4usv)(const GLushort * v) { stub_funcs.ptr_glColor4usv(v); }
void (glTexCoord1d)(GLdouble s) { stub_funcs.ptr_glTexCoord1d(s); }
void (glTexCoord1f)(GLfloat s) { stub_funcs.ptr_glTexCoord1f(s); }
void (glTexCoord1i)(GLint s) { stub_funcs.ptr_glTexCoord1i(s); }
void (glTexCoord1s)(GLshort s) { stub_funcs.ptr_glTexCoord1s(s); }
void (glTexCoord2d)(GLdouble s, GLdouble t) { stub_funcs.ptr_glTexCoord2d(s, t); }
void (glTexCoord2f)(GLfloat s, GLfloat t) { stub_funcs.ptr_glTexCoord2f(s, t); }
void (glTexCoord2i)(GLint s, GLint t) { stub_funcs.ptr_glTexCoord2i(s, t); }
void (glTexCoord2s)(GLshort s, GLshort t) { stub_funcs.ptr_glTexCoord2s(s, t); }
void (glTexCoord3d)(GLdouble s, GLdouble t, GLdouble r) { stub_funcs.ptr_glTexCoord3d(s, t, r); }
void (glTexCoord3f)(GLfloat s, GLfloat t, GLfloat r) { stub_funcs.ptr_glTexCoord3f(s, t, r); }
void (glTexCoord3i)(GLint s, GLint t, GLint r) { stub_funcs.ptr_glTexCoord3i(s, t, r); }
void (glTexCoord3s)(GLshort s, GLshort t, GLshort r) { stub_funcs.ptr_glTexCoord3s(s, t, r); }
void (glTexCoord4d)(GLdouble s, GLdouble t, GLdouble r, GLdouble q) { stub_funcs.ptr_glTexCoord4d(s, t, r, q); }
void (glTexCoord4f)(GLfloat s, GLfloat t, GLfloat r, GLfloat q) { stub_funcs.ptr_glTexCoord4f(s, t, r, q); }
void (glTexCoord4i)(GLint s, GLint t, GLint r, GLint q) { stub_funcs.ptr_glTexCoord4i(s, t, r, q); }
void (glTexCoord4s)(GLshort s, GLshort t, GLshort r, GLshort q) { stub_funcs.ptr_glTexCoord4s(s, t, r, q); }
void (glTexCoord1dv)(const GLdouble * v) { stub_funcs.ptr_glTexCoord1dv(v); }
void (glTexCoord1fv)(const GLfloat * v) { stub_funcs.ptr_glTexCoord1fv(v); }
void (glTexCoord1iv)(const GLint * v) { stub_funcs.ptr_glTexCoord1iv(v); }
void (glTexCoord1sv)(const GLshort * v) { stub_funcs.ptr_glTexCoord1sv(v); }
void (glTexCoord2dv)(const GLdouble * v) { stub_funcs.ptr_glTexCoord2dv(v); }
void (glTexCoord2fv)(const GLfloat * v) { stub_funcs.ptr_glTexCoord2fv(v); }
void (glTexCoord2iv)(const GLint * v) { stub_funcs.ptr_glTexCoord2iv(v); }
void (glTexCoord2sv)(const GLshort * v) { stub_funcs.ptr_glTexCoord2sv(v); }
void (glTexCoord3dv)(const GLdouble * v) { stub_funcs.ptr_glTexCoord3dv(v); }
void (glTexCoord3fv)(const GLfloat * v) { stub_funcs.ptr_glTexCoord3fv(v); }
void (glTexCoord3iv)(const GLint * v) { stub_funcs.ptr_glTexCoord3iv(v); }
void (glTexCoord3sv)(const GLshort * v) { stub_funcs.ptr_glTexCoord3sv(v); }
void (glTexCoord4dv)(const GLdouble * v) { stub_funcs.ptr_glTexCoord4dv(v); }
void (glTexCoord4fv)(const GLfloat * v) { stub_funcs.ptr_glTexCoord4fv(v); }
void (glTexCoord4iv)(const GLint * v) { stub_funcs.ptr_glTexCoord4iv(v); }
void (glTexCoord4sv)(const GLshort * v) { stub_funcs.ptr_glTexCoord4sv(v); }
void (glRasterPos2d)(GLdouble x, GLdouble y) { stub_funcs.ptr_glRasterPos2d(x, y); }
void (glRasterPos2f)(GLfloat x, GLfloat y) { stub_funcs.ptr_glRasterPos2f(x, y); }
void (glRasterPos2i)(GLint x, GLint y) { stub_funcs.ptr_glRasterPos2i(x, y); }
void (glRasterPos2s)(GLshort x, GLshort y) { stub_funcs.ptr_glRasterPos2s(x, y); }
void (glRasterPos3d)(GLdouble x, GLdouble y, GLdouble z) { stub_funcs.ptr_glRasterPos3d(x, y, z); }
void (glRasterPos3f)(GLfloat x, GLfloat y, GLfloat z) { stub_funcs.ptr_glRasterPos3f(x, y, z); }
void (glRasterPos3i)(GLint x, GLint y, GLint z) { stub_funcs.ptr_glRasterPos3i(x, y, z); }
void (glRasterPos3s)(GLshort x, GLshort y, GLshort z) { stub_funcs.ptr_glRasterPos3s(x, y, z); }
void (glRasterPos4d)(GLdouble x, GLdouble y, GLdouble z, GLdouble w) { stub_funcs.ptr_glRasterPos4d(x, y, z, w); }
void (glRasterPos4f)(GLfloat x, GLfloat y, GLfloat z, GLfloat w) { stub_funcs.ptr_glRasterPos4f(x, y, z, w); }
void (glRasterPos4i)(GLint x, GLint y, GLint z, GLint w) { stub_funcs.ptr_glRasterPos4i(x, y, z, w); }
void (glRasterPos4s)(GLshort x, GLshort y, GLshort z, GLshort w) { stub_funcs.ptr_glRasterPos4s(x, y, z, w); }
void (glRasterPos2dv)(const GLdouble * v) { stub_funcs.ptr_glRasterPos2dv(v); }
void (glRasterPos2fv)(const GLfloat * v) { stub_funcs.ptr_glRasterPos2fv(v); }
void (glRasterPos2iv)(const GLint * v) { stub_funcs.ptr_glRasterPos2iv(v); }
void (glRasterPos2sv)(const GLshort * v) { stub_funcs.ptr_glRasterPos2sv(v); }
void (glRasterPos3dv)(const GLdouble * v) { stub_funcs.ptr_glRasterPos3dv(v); }
void (glRasterPos3fv)(const GLfloat * v) { stub_funcs.ptr_glRasterPos3fv(v); }
void (glRasterPos3iv)(const GLint * v) { stub_funcs.ptr_glRasterPos3iv(v); }
void (glRasterPos3sv)(const GLshort * v) { stub_funcs.ptr_glRasterPos3sv(v); }
void (glRasterPos4dv)(const GLdouble * v) { stub_funcs.ptr_glRasterPos4dv(v); }
void (glRasterPos4fv)(const GLfloat * v) { stub_funcs.ptr_glRasterPos4fv(v); }
void (glRasterPos4iv)(const GLint * v) { stub_funcs.ptr_glRasterPos4iv(v); }
void (glRasterPos4sv)(const GLshort * v) { stub_funcs.ptr_glRasterPos4sv(v); }
void (glRectd)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) { stub_funcs.ptr_glRectd(x1, y1, x2, y2); }
void (glRectf)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) { stub_funcs.ptr_glRectf(x1, y1, x2, y2); }
void (glRecti)(GLint x1, GLint y1, GLint x2, GLint y2) { stub_funcs.ptr_glRecti(x1, y1, x2, y2); }
void (glRects)(GLshort x1, GLshort y1, GLshort x2, GLshort y2) { stub_funcs.ptr_glRects(x1, y1, x2, y2); }
void (glRectdv)(const GLdouble * v1, const GLdouble * v2) { stub_funcs.ptr_glRectdv(v1, v2); }
void (glRectfv)(const GLfloat * v1, const GLfloat * v2) { stub_funcs.ptr_glRectfv(v1, v2); }
void (glRectiv)(const GLint * v1, const GLint * v2) { stub_funcs.ptr_glRectiv(v1, v2); }
void (glRectsv)(const GLshort * v1, const GLshort * v2) { stub_funcs.ptr_glRectsv(v1, v2); }
void (glVertexPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glVertexPointer(size, type, stride, ptr); }
void (glNormalPointer)(GLenum type, GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glNormalPointer(type, stride, ptr); }
void (glColorPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glColorPointer(size, type, stride, ptr); }
void (glIndexPointer)(GLenum type, GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glIndexPointer(type, stride, ptr); }
void (glTexCoordPointer)(GLint size, GLenum type, GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glTexCoordPointer(size, type, stride, ptr); }
void (glEdgeFlagPointer)(GLsizei stride, const GLvoid * ptr) { stub_funcs.ptr_glEdgeFlagPointer(stride, ptr); }
void (glGetPointerv)(GLenum pname, GLvoid * * params) { stub_funcs.ptr_glGetPointerv(pname, params); }
void (glArrayElement)(GLint i) { stub_funcs.ptr_glArrayElement(i); }
void (glDrawArrays)(GLenum mode, GLint first, GLsizei count) { stub_funcs.ptr_glDrawArrays(mode, first, count); }
void (glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices) { stub_funcs.ptr_glDrawElements(mode, count, type, indices); }
void (glInterleavedArrays)(GLenum format, GLsizei stride, const GLvoid * pointer) { stub_funcs.ptr_glInterleavedArrays(format, stride, pointer); }
void (glShadeModel)(GLenum mode) { stub_funcs.ptr_glShadeModel(mode); }
void (glLightf)(GLenum light, GLenum pname, GLfloat param) { stub_funcs.ptr_glLightf(light, pname, param); }
void (glLighti)(GLenum light, GLenum pname, GLint param) { stub_funcs.ptr_glLighti(light, pname, param); }
void (glLightfv)(GLenum light, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glLightfv(light, pname, params); }
void (glLightiv)(GLenum light, GLenum pname, const GLint * params) { stub_funcs.ptr_glLightiv(light, pname, params); }
void (glGetLightfv)(GLenum light, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetLightfv(light, pname, params); }
void (glGetLightiv)(GLenum light, GLenum pname, GLint * params) { stub_funcs.ptr_glGetLightiv(light, pname, params); }
void (glLightModelf)(GLenum pname, GLfloat param) { stub_funcs.ptr_glLightModelf(pname, param); }
void (glLightModeli)(GLenum pname, GLint param) { stub_funcs.ptr_glLightModeli(pname, param); }
void (glLightModelfv)(GLenum pname, const GLfloat * params) { stub_funcs.ptr_glLightModelfv(pname, params); }
void (glLightModeliv)(GLenum pname, const GLint * params) { stub_funcs.ptr_glLightModeliv(pname, params); }
void (glMaterialf)(GLenum face, GLenum pname, GLfloat param) { stub_funcs.ptr_glMaterialf(face, pname, param); }
void (glMateriali)(GLenum face, GLenum pname, GLint param) { stub_funcs.ptr_glMateriali(face, pname, param); }
void (glMaterialfv)(GLenum face, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glMaterialfv(face, pname, params); }
void (glMaterialiv)(GLenum face, GLenum pname, const GLint * params) { stub_funcs.ptr_glMaterialiv(face, pname, params); }
void (glGetMaterialfv)(GLenum face, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetMaterialfv(face, pname, params); }
void (glGetMaterialiv)(GLenum face, GLenum pname, GLint * params) { stub_funcs.ptr_glGetMaterialiv(face, pname, params); }
void (glColorMaterial)(GLenum face, GLenum mode) { stub_funcs.ptr_glColorMaterial(face, mode); }
void (glPixelZoom)(GLfloat xfactor, GLfloat yfactor) { stub_funcs.ptr_glPixelZoom(xfactor, yfactor); }
void (glPixelStoref)(GLenum pname, GLfloat param) { stub_funcs.ptr_glPixelStoref(pname, param); }
void (glPixelStorei)(GLenum pname, GLint param) { stub_funcs.ptr_glPixelStorei(pname, param); }
void (glPixelTransferf)(GLenum pname, GLfloat param) { stub_funcs.ptr_glPixelTransferf(pname, param); }
void (glPixelTransferi)(GLenum pname, GLint param) { stub_funcs.ptr_glPixelTransferi(pname, param); }
void (glPixelMapfv)(GLenum map, GLsizei mapsize, const GLfloat * values) { stub_funcs.ptr_glPixelMapfv(map, mapsize, values); }
void (glPixelMapuiv)(GLenum map, GLsizei mapsize, const GLuint * values) { stub_funcs.ptr_glPixelMapuiv(map, mapsize, values); }
void (glPixelMapusv)(GLenum map, GLsizei mapsize, const GLushort * values) { stub_funcs.ptr_glPixelMapusv(map, mapsize, values); }
void (glGetPixelMapfv)(GLenum map, GLfloat * values) { stub_funcs.ptr_glGetPixelMapfv(map, values); }
void (glGetPixelMapuiv)(GLenum map, GLuint * values) { stub_funcs.ptr_glGetPixelMapuiv(map, values); }
void (glGetPixelMapusv)(GLenum map, GLushort * values) { stub_funcs.ptr_glGetPixelMapusv(map, values); }
void (glBitmap)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap) { stub_funcs.ptr_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap); }
void (glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels) { stub_funcs.ptr_glReadPixels(x, y, width, height, format, type, pixels); }
void (glDrawPixels)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glDrawPixels(width, height, format, type, pixels); }
void (glCopyPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) { stub_funcs.ptr_glCopyPixels(x, y, width, height, type); }
void (glStencilFunc)(GLenum func, GLint ref, GLuint mask) { stub_funcs.ptr_glStencilFunc(func, ref, mask); }
void (glStencilMask)(GLuint mask) { stub_funcs.ptr_glStencilMask(mask); }
void (glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass) { stub_funcs.ptr_glStencilOp(fail, zfail, zpass); }
void (glClearStencil)(GLint s) { stub_funcs.ptr_glClearStencil(s); }
void (glTexGend)(GLenum coord, GLenum pname, GLdouble param) { stub_funcs.ptr_glTexGend(coord, pname, param); }
void (glTexGenf)(GLenum coord, GLenum pname, GLfloat param) { stub_funcs.ptr_glTexGenf(coord, pname, param); }
void (glTexGeni)(GLenum coord, GLenum pname, GLint param) { stub_funcs.ptr_glTexGeni(coord, pname, param); }
void (glTexGendv)(GLenum coord, GLenum pname, const GLdouble * params) { stub_funcs.ptr_glTexGendv(coord, pname, params); }
void (glTexGenfv)(GLenum coord, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glTexGenfv(coord, pname, params); }
void (glTexGeniv)(GLenum coord, GLenum pname, const GLint * params) { stub_funcs.ptr_glTexGeniv(coord, pname, params); }
void (glGetTexGendv)(GLenum coord, GLenum pname, GLdouble * params) { stub_funcs.ptr_glGetTexGendv(coord, pname, params); }
void (glGetTexGenfv)(GLenum coord, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetTexGenfv(coord, pname, params); }
void (glGetTexGeniv)(GLenum coord, GLenum pname, GLint * params) { stub_funcs.ptr_glGetTexGeniv(coord, pname, params); }
void (glTexEnvf)(GLenum target, GLenum pname, GLfloat param) { stub_funcs.ptr_glTexEnvf(target, pname, param); }
void (glTexEnvi)(GLenum target, GLenum pname, GLint param) { stub_funcs.ptr_glTexEnvi(target, pname, param); }
void (glTexEnvfv)(GLenum target, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glTexEnvfv(target, pname, params); }
void (glTexEnviv)(GLenum target, GLenum pname, const GLint * params) { stub_funcs.ptr_glTexEnviv(target, pname, params); }
void (glGetTexEnvfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetTexEnvfv(target, pname, params); }
void (glGetTexEnviv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetTexEnviv(target, pname, params); }
void (glTexParameterf)(GLenum target, GLenum pname, GLfloat param) { stub_funcs.ptr_glTexParameterf(target, pname, param); }
void (glTexParameteri)(GLenum target, GLenum pname, GLint param) { stub_funcs.ptr_glTexParameteri(target, pname, param); }
void (glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glTexParameterfv(target, pname, params); }
void (glTexParameteriv)(GLenum target, GLenum pname, const GLint * params) { stub_funcs.ptr_glTexParameteriv(target, pname, params); }
void (glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetTexParameterfv(target, pname, params); }
void (glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetTexParameteriv(target, pname, params); }
void (glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetTexLevelParameterfv(target, level, pname, params); }
void (glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params) { stub_funcs.ptr_glGetTexLevelParameteriv(target, level, pname, params); }
void (glTexImage1D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexImage1D(target, level, internalFormat, width, border, format, type, pixels); }
void (glTexImage2D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexImage2D(target, level, internalFormat, width, height, border, format, type, pixels); }
void (glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels) { stub_funcs.ptr_glGetTexImage(target, level, format, type, pixels); }
void (glGenTextures)(GLsizei n, GLuint * textures) { stub_funcs.ptr_glGenTextures(n, textures); }
void (glDeleteTextures)(GLsizei n, const GLuint * textures) { stub_funcs.ptr_glDeleteTextures(n, textures); }
void (glBindTexture)(GLenum target, GLuint texture) { stub_funcs.ptr_glBindTexture(target, texture); }
void (glPrioritizeTextures)(GLsizei n, const GLuint * textures, const GLclampf * priorities) { stub_funcs.ptr_glPrioritizeTextures(n, textures, priorities); }
GLboolean (glAreTexturesResident)(GLsizei n, const GLuint * textures, GLboolean * residences) { return stub_funcs.ptr_glAreTexturesResident(n, textures, residences); }
GLboolean (glIsTexture)(GLuint texture) { return stub_funcs.ptr_glIsTexture(texture); }
void (glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexSubImage1D(target, level, xoffset, width, format, type, pixels); }
void (glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }
void (glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) { stub_funcs.ptr_glCopyTexImage1D(target, level, internalformat, x, y, width, border); }
void (glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) { stub_funcs.ptr_glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }
void (glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) { stub_funcs.ptr_glCopyTexSubImage1D(target, level, xoffset, x, y, width); }
void (glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) { stub_funcs.ptr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }
void (glMap1d)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points) { stub_funcs.ptr_glMap1d(target, u1, u2, stride, order, points); }
void (glMap1f)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points) { stub_funcs.ptr_glMap1f(target, u1, u2, stride, order, points); }
void (glMap2d)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points) { stub_funcs.ptr_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
void (glMap2f)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points) { stub_funcs.ptr_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points); }
void (glGetMapdv)(GLenum target, GLenum query, GLdouble * v) { stub_funcs.ptr_glGetMapdv(target, query, v); }
void (glGetMapfv)(GLenum target, GLenum query, GLfloat * v) { stub_funcs.ptr_glGetMapfv(target, query, v); }
void (glGetMapiv)(GLenum target, GLenum query, GLint * v) { stub_funcs.ptr_glGetMapiv(target, query, v); }
void (glEvalCoord1d)(GLdouble u) { stub_funcs.ptr_glEvalCoord1d(u); }
void (glEvalCoord1f)(GLfloat u) { stub_funcs.ptr_glEvalCoord1f(u); }
void (glEvalCoord1dv)(const GLdouble * u) { stub_funcs.ptr_glEvalCoord1dv(u); }
void (glEvalCoord1fv)(const GLfloat * u) { stub_funcs.ptr_glEvalCoord1fv(u); }
void (glEvalCoord2d)(GLdouble u, GLdouble v) { stub_funcs.ptr_glEvalCoord2d(u, v); }
void (glEvalCoord2f)(GLfloat u, GLfloat v) { stub_funcs.ptr_glEvalCoord2f(u, v); }
void (glEvalCoord2dv)(const GLdouble * u) { stub_funcs.ptr_glEvalCoord2dv(u); }
void (glEvalCoord2fv)(const GLfloat * u) { stub_funcs.ptr_glEvalCoord2fv(u); }
void (glMapGrid1d)(GLint un, GLdouble u1, GLdouble u2) { stub_funcs.ptr_glMapGrid1d(un, u1, u2); }
void (glMapGrid1f)(GLint un, GLfloat u1, GLfloat u2) { stub_funcs.ptr_glMapGrid1f(un, u1, u2); }
void (glMapGrid2d)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) { stub_funcs.ptr_glMapGrid2d(un, u1, u2, vn, v1, v2); }
void (glMapGrid2f)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) { stub_funcs.ptr_glMapGrid2f(un, u1, u2, vn, v1, v2); }
void (glEvalPoint1)(GLint i) { stub_funcs.ptr_glEvalPoint1(i); }
void (glEvalPoint2)(GLint i, GLint j) { stub_funcs.ptr_glEvalPoint2(i, j); }
void (glEvalMesh1)(GLenum mode, GLint i1, GLint i2) { stub_funcs.ptr_glEvalMesh1(mode, i1, i2); }
void (glEvalMesh2)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) { stub_funcs.ptr_glEvalMesh2(mode, i1, i2, j1, j2); }
void (glFogf)(GLenum pname, GLfloat param) { stub_funcs.ptr_glFogf(pname, param); }
void (glFogi)(GLenum pname, GLint param) { stub_funcs.ptr_glFogi(pname, param); }
void (glFogfv)(GLenum pname, const GLfloat * params) { stub_funcs.ptr_glFogfv(pname, params); }
void (glFogiv)(GLenum pname, const GLint * params) { stub_funcs.ptr_glFogiv(pname, params); }
void (glFeedbackBuffer)(GLsizei size, GLenum type, GLfloat * buffer) { stub_funcs.ptr_glFeedbackBuffer(size, type, buffer); }
void (glPassThrough)(GLfloat token) { stub_funcs.ptr_glPassThrough(token); }
void (glSelectBuffer)(GLsizei size, GLuint * buffer) { stub_funcs.ptr_glSelectBuffer(size, buffer); }
void (glInitNames)(void) { stub_funcs.ptr_glInitNames(); }
void (glLoadName)(GLuint name) { stub_funcs.ptr_glLoadName(name); }
void (glPushName)(GLuint name) { stub_funcs.ptr_glPushName(name); }
void (glPopName)(void) { stub_funcs.ptr_glPopName(); }
void (glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices) { stub_funcs.ptr_glDrawRangeElements(mode, start, end, count, type, indices); }
void (glTexImage3D)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels); }
void (glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels) { stub_funcs.ptr_glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels); }
void (glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) { stub_funcs.ptr_glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height); }
void (glColorTable)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * table) { stub_funcs.ptr_glColorTable(target, internalformat, width, format, type, table); }
void (glColorSubTable)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data) { stub_funcs.ptr_glColorSubTable(target, start, count, format, type, data); }
void (glColorTableParameteriv)(GLenum target, GLenum pname, const GLint * params) { stub_funcs.ptr_glColorTableParameteriv(target, pname, params); }
void (glColorTableParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glColorTableParameterfv(target, pname, params); }
void (glCopyColorSubTable)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) { stub_funcs.ptr_glCopyColorSubTable(target, start, x, y, width); }
void (glCopyColorTable)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) { stub_funcs.ptr_glCopyColorTable(target, internalformat, x, y, width); }
void (glGetColorTable)(GLenum target, GLenum format, GLenum type, GLvoid * table) { stub_funcs.ptr_glGetColorTable(target, format, type, table); }
void (glGetColorTableParameterfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetColorTableParameterfv(target, pname, params); }
void (glGetColorTableParameteriv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetColorTableParameteriv(target, pname, params); }
void (glBlendEquation)(GLenum mode) { stub_funcs.ptr_glBlendEquation(mode); }
void (glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) { stub_funcs.ptr_glBlendColor(red, green, blue, alpha); }
void (glHistogram)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) { stub_funcs.ptr_glHistogram(target, width, internalformat, sink); }
void (glResetHistogram)(GLenum target) { stub_funcs.ptr_glResetHistogram(target); }
void (glGetHistogram)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values) { stub_funcs.ptr_glGetHistogram(target, reset, format, type, values); }
void (glGetHistogramParameterfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetHistogramParameterfv(target, pname, params); }
void (glGetHistogramParameteriv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetHistogramParameteriv(target, pname, params); }
void (glMinmax)(GLenum target, GLenum internalformat, GLboolean sink) { stub_funcs.ptr_glMinmax(target, internalformat, sink); }
void (glResetMinmax)(GLenum target) { stub_funcs.ptr_glResetMinmax(target); }
void (glGetMinmax)(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid * values) { stub_funcs.ptr_glGetMinmax(target, reset, format, types, values); }
void (glGetMinmaxParameterfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetMinmaxParameterfv(target, pname, params); }
void (glGetMinmaxParameteriv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetMinmaxParameteriv(target, pname, params); }
void (glConvolutionFilter1D)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid * image) { stub_funcs.ptr_glConvolutionFilter1D(target, internalformat, width, format, type, image); }
void (glConvolutionFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image) { stub_funcs.ptr_glConvolutionFilter2D(target, internalformat, width, height, format, type, image); }
void (glConvolutionParameterf)(GLenum target, GLenum pname, GLfloat params) { stub_funcs.ptr_glConvolutionParameterf(target, pname, params); }
void (glConvolutionParameterfv)(GLenum target, GLenum pname, const GLfloat * params) { stub_funcs.ptr_glConvolutionParameterfv(target, pname, params); }
void (glConvolutionParameteri)(GLenum target, GLenum pname, GLint params) { stub_funcs.ptr_glConvolutionParameteri(target, pname, params); }
void (glConvolutionParameteriv)(GLenum target, GLenum pname, const GLint * params) { stub_funcs.ptr_glConvolutionParameteriv(target, pname, params); }
void (glCopyConvolutionFilter1D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) { stub_funcs.ptr_glCopyConvolutionFilter1D(target, internalformat, x, y, width); }
void (glCopyConvolutionFilter2D)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) { stub_funcs.ptr_glCopyConvolutionFilter2D(target, internalformat, x, y, width, height); }
void (glGetConvolutionFilter)(GLenum target, GLenum format, GLenum type, GLvoid * image) { stub_funcs.ptr_glGetConvolutionFilter(target, format, type, image); }
void (glGetConvolutionParameterfv)(GLenum target, GLenum pname, GLfloat * params) { stub_funcs.ptr_glGetConvolutionParameterfv(target, pname, params); }
void (glGetConvolutionParameteriv)(GLenum target, GLenum pname, GLint * params) { stub_funcs.ptr_glGetConvolutionParameteriv(target, pname, params); }
void (glSeparableFilter2D)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column) { stub_funcs.ptr_glSeparableFilter2D(target, internalformat, width, height, format, type, row, column); }
void (glGetSeparableFilter)(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span) { stub_funcs.ptr_glGetSeparableFilter(target, format, type, row, column, span); }
void (glActiveTexture)(GLenum texture) { stub_funcs.ptr_glActiveTexture(texture); }
void (glClientActiveTexture)(GLenum texture) { stub_funcs.ptr_glClientActiveTexture(texture); }
void (glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data); }
void (glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data); }
void (glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data); }
void (glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data); }
void (glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data); }
void (glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data) { stub_funcs.ptr_glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data); }
void (glGetCompressedTexImage)(GLenum target, GLint lod, GLvoid * img) { stub_funcs.ptr_glGetCompressedTexImage(target, lod, img); }
void (glMultiTexCoord1d)(GLenum target, GLdouble s) { stub_funcs.ptr_glMultiTexCoord1d(target, s); }
void (glMultiTexCoord1dv)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord1dv(target, v); }
void (glMultiTexCoord1f)(GLenum target, GLfloat s) { stub_funcs.ptr_glMultiTexCoord1f(target, s); }
void (glMultiTexCoord1fv)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord1fv(target, v); }
void (glMultiTexCoord1i)(GLenum target, GLint s) { stub_funcs.ptr_glMultiTexCoord1i(target, s); }
void (glMultiTexCoord1iv)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord1iv(target, v); }
void (glMultiTexCoord1s)(GLenum target, GLshort s) { stub_funcs.ptr_glMultiTexCoord1s(target, s); }
void (glMultiTexCoord1sv)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord1sv(target, v); }
void (glMultiTexCoord2d)(GLenum target, GLdouble s, GLdouble t) { stub_funcs.ptr_glMultiTexCoord2d(target, s, t); }
void (glMultiTexCoord2dv)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord2dv(target, v); }
void (glMultiTexCoord2f)(GLenum target, GLfloat s, GLfloat t) { stub_funcs.ptr_glMultiTexCoord2f(target, s, t); }
void (glMultiTexCoord2fv)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord2fv(target, v); }
void (glMultiTexCoord2i)(GLenum target, GLint s, GLint t) { stub_funcs.ptr_glMultiTexCoord2i(target, s, t); }
void (glMultiTexCoord2iv)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord2iv(target, v); }
void (glMultiTexCoord2s)(GLenum target, GLshort s, GLshort t) { stub_funcs.ptr_glMultiTexCoord2s(target, s, t); }
void (glMultiTexCoord2sv)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord2sv(target, v); }
void (glMultiTexCoord3d)(GLenum target, GLdouble s, GLdouble t, GLdouble r) { stub_funcs.ptr_glMultiTexCoord3d(target, s, t, r); }
void (glMultiTexCoord3dv)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord3dv(target, v); }
void (glMultiTexCoord3f)(GLenum target, GLfloat s, GLfloat t, GLfloat r) { stub_funcs.ptr_glMultiTexCoord3f(target, s, t, r); }
void (glMultiTexCoord3fv)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord3fv(target, v); }
void (glMultiTexCoord3i)(GLenum target, GLint s, GLint t, GLint r) { stub_funcs.ptr_glMultiTexCoord3i(target, s, t, r); }
void (glMultiTexCoord3iv)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord3iv(target, v); }
void (glMultiTexCoord3s)(GLenum target, GLshort s, GLshort t, GLshort r) { stub_funcs.ptr_glMultiTexCoord3s(target, s, t, r); }
void (glMultiTexCoord3sv)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord3sv(target, v); }
void (glMultiTexCoord4d)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { stub_funcs.ptr_glMultiTexCoord4d(target, s, t, r, q); }
void (glMultiTexCoord4dv)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord4dv(target, v); }
void (glMultiTexCoord4f)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { stub_funcs.ptr_glMultiTexCoord4f(target, s, t, r, q); }
void (glMultiTexCoord4fv)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord4fv(target, v); }
void (glMultiTexCoord4i)(GLenum target, GLint s, GLint t, GLint r, GLint q) { stub_funcs.ptr_glMultiTexCoord4i(target, s, t, r, q); }
void (glMultiTexCoord4iv)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord4iv(target, v); }
void (glMultiTexCoord4s)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { stub_funcs.ptr_glMultiTexCoord4s(target, s, t, r, q); }
void (glMultiTexCoord4sv)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord4sv(target, v); }
void (glLoadTransposeMatrixd)(const GLdouble m[16]) { stub_funcs.ptr_glLoadTransposeMatrixd(m); }
void (glLoadTransposeMatrixf)(const GLfloat m[16]) { stub_funcs.ptr_glLoadTransposeMatrixf(m); }
void (glMultTransposeMatrixd)(const GLdouble m[16]) { stub_funcs.ptr_glMultTransposeMatrixd(m); }
void (glMultTransposeMatrixf)(const GLfloat m[16]) { stub_funcs.ptr_glMultTransposeMatrixf(m); }
void (glSampleCoverage)(GLclampf value, GLboolean invert) { stub_funcs.ptr_glSampleCoverage(value, invert); }
void (glActiveTextureARB)(GLenum texture) { stub_funcs.ptr_glActiveTextureARB(texture); }
void (glClientActiveTextureARB)(GLenum texture) { stub_funcs.ptr_glClientActiveTextureARB(texture); }
void (glMultiTexCoord1dARB)(GLenum target, GLdouble s) { stub_funcs.ptr_glMultiTexCoord1dARB(target, s); }
void (glMultiTexCoord1dvARB)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord1dvARB(target, v); }
void (glMultiTexCoord1fARB)(GLenum target, GLfloat s) { stub_funcs.ptr_glMultiTexCoord1fARB(target, s); }
void (glMultiTexCoord1fvARB)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord1fvARB(target, v); }
void (glMultiTexCoord1iARB)(GLenum target, GLint s) { stub_funcs.ptr_glMultiTexCoord1iARB(target, s); }
void (glMultiTexCoord1ivARB)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord1ivARB(target, v); }
void (glMultiTexCoord1sARB)(GLenum target, GLshort s) { stub_funcs.ptr_glMultiTexCoord1sARB(target, s); }
void (glMultiTexCoord1svARB)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord1svARB(target, v); }
void (glMultiTexCoord2dARB)(GLenum target, GLdouble s, GLdouble t) { stub_funcs.ptr_glMultiTexCoord2dARB(target, s, t); }
void (glMultiTexCoord2dvARB)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord2dvARB(target, v); }
void (glMultiTexCoord2fARB)(GLenum target, GLfloat s, GLfloat t) { stub_funcs.ptr_glMultiTexCoord2fARB(target, s, t); }
void (glMultiTexCoord2fvARB)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord2fvARB(target, v); }
void (glMultiTexCoord2iARB)(GLenum target, GLint s, GLint t) { stub_funcs.ptr_glMultiTexCoord2iARB(target, s, t); }
void (glMultiTexCoord2ivARB)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord2ivARB(target, v); }
void (glMultiTexCoord2sARB)(GLenum target, GLshort s, GLshort t) { stub_funcs.ptr_glMultiTexCoord2sARB(target, s, t); }
void (glMultiTexCoord2svARB)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord2svARB(target, v); }
void (glMultiTexCoord3dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r) { stub_funcs.ptr_glMultiTexCoord3dARB(target, s, t, r); }
void (glMultiTexCoord3dvARB)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord3dvARB(target, v); }
void (glMultiTexCoord3fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r) { stub_funcs.ptr_glMultiTexCoord3fARB(target, s, t, r); }
void (glMultiTexCoord3fvARB)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord3fvARB(target, v); }
void (glMultiTexCoord3iARB)(GLenum target, GLint s, GLint t, GLint r) { stub_funcs.ptr_glMultiTexCoord3iARB(target, s, t, r); }
void (glMultiTexCoord3ivARB)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord3ivARB(target, v); }
void (glMultiTexCoord3sARB)(GLenum target, GLshort s, GLshort t, GLshort r) { stub_funcs.ptr_glMultiTexCoord3sARB(target, s, t, r); }
void (glMultiTexCoord3svARB)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord3svARB(target, v); }
void (glMultiTexCoord4dARB)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) { stub_funcs.ptr_glMultiTexCoord4dARB(target, s, t, r, q); }
void (glMultiTexCoord4dvARB)(GLenum target, const GLdouble * v) { stub_funcs.ptr_glMultiTexCoord4dvARB(target, v); }
void (glMultiTexCoord4fARB)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) { stub_funcs.ptr_glMultiTexCoord4fARB(target, s, t, r, q); }
void (glMultiTexCoord4fvARB)(GLenum target, const GLfloat * v) { stub_funcs.ptr_glMultiTexCoord4fvARB(target, v); }
void (glMultiTexCoord4iARB)(GLenum target, GLint s, GLint t, GLint r, GLint q) { stub_funcs.ptr_glMultiTexCoord4iARB(target, s, t, r, q); }
void (glMultiTexCoord4ivARB)(GLenum target, const GLint * v) { stub_funcs.ptr_glMultiTexCoord4ivARB(target, v); }
void (glMultiTexCoord4sARB)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) { stub_funcs.ptr_glMultiTexCoord4sARB(target, s, t, r, q); }
void (glMultiTexCoord4svARB)(GLenum target, const GLshort * v) { stub_funcs.ptr_glMultiTexCoord4svARB(target, v); }
void (glBlendEquationSeparateATI)(GLenum modeRGB, GLenum modeA) { stub_funcs.ptr_glBlendEquationSeparateATI(modeRGB, modeA); }
XVisualInfo * (glXChooseVisual)(Display * dpy, int screen, int * attribList) { return stub_funcs.ptr_glXChooseVisual(dpy, screen, attribList); }
GLXContext (glXCreateContext)(Display * dpy, XVisualInfo * vis, GLXContext shareList, int direct) { return stub_funcs.ptr_glXCreateContext(dpy, vis, shareList, direct); }
void (glXDestroyContext)(Display * dpy, GLXContext ctx) { stub_funcs.ptr_glXDestroyContext(dpy, ctx); }
int (glXMakeCurrent)(Display * dpy, GLXDrawable drawable, GLXContext ctx) { return stub_funcs.ptr_glXMakeCurrent(dpy, drawable, ctx); }
void (glXCopyContext)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask) { stub_funcs.ptr_glXCopyContext(dpy, src, dst, mask); }
void (glXSwapBuffers)(Display * dpy, GLXDrawable drawable) { stub_funcs.ptr_glXSwapBuffers(dpy, drawable); }
GLXPixmap (glXCreateGLXPixmap)(Display * dpy, XVisualInfo * visual, Pixmap pixmap) { return stub_funcs.ptr_glXCreateGLXPixmap(dpy, visual, pixmap); }
void (glXDestroyGLXPixmap)(Display * dpy, GLXPixmap pixmap) { stub_funcs.ptr_glXDestroyGLXPixmap(dpy, pixmap); }
int (glXQueryExtension)(Display * dpy, int * errorb, int * event) { return stub_funcs.ptr_glXQueryExtension(dpy, errorb, event); }
int (glXQueryVersion)(Display * dpy, int * maj, int * min) { return stub_funcs.ptr_glXQueryVersion(dpy, maj, min); }
int (glXIsDirect)(Display * dpy, GLXContext ctx) { return stub_funcs.ptr_glXIsDirect(dpy, ctx); }
int (glXGetConfig)(Display * dpy, XVisualInfo * visual, int attrib, int * value) { return stub_funcs.ptr_glXGetConfig(dpy, visual, attrib, value); }
GLXContext (glXGetCurrentContext)(void) { return stub_funcs.ptr_glXGetCurrentContext(); }
GLXDrawable (glXGetCurrentDrawable)(void) { return stub_funcs.ptr_glXGetCurrentDrawable(); }
void (glXWaitGL)(void) { stub_funcs.ptr_glXWaitGL(); }
void (glXWaitX)(void) { stub_funcs.ptr_glXWaitX(); }
void (glXUseXFont)(Font font, int first, int count, int list) { stub_funcs.ptr_glXUseXFont(font, first, count, list); }
const char * (glXQueryExtensionsString)(Display * dpy, int screen) { return stub_funcs.ptr_glXQueryExtensionsString(dpy, screen); }
const char * (glXQueryServerString)(Display * dpy, int screen, int name) { return stub_funcs.ptr_glXQueryServerString(dpy, screen, name); }
const char * (glXGetClientString)(Display * dpy, int name) { return stub_funcs.ptr_glXGetClientString(dpy, name); }
Display * (glXGetCurrentDisplay)(void) { return stub_funcs.ptr_glXGetCurrentDisplay(); }
GLXFBConfig * (glXChooseFBConfig)(Display * dpy, int screen, const int * attribList, int * nitems) { return stub_funcs.ptr_glXChooseFBConfig(dpy, screen, attribList, nitems); }
int (glXGetFBConfigAttrib)(Display * dpy, GLXFBConfig config, int attribute, int * value) { return stub_funcs.ptr_glXGetFBConfigAttrib(dpy, config, attribute, value); }
GLXFBConfig * (glXGetFBConfigs)(Display * dpy, int screen, int * nelements) { return stub_funcs.ptr_glXGetFBConfigs(dpy, screen, nelements); }
XVisualInfo * (glXGetVisualFromFBConfig)(Display * dpy, GLXFBConfig config) { return stub_funcs.ptr_glXGetVisualFromFBConfig(dpy, config); }
GLXWindow (glXCreateWindow)(Display * dpy, GLXFBConfig config, Window win, const int * attribList) { return stub_funcs.ptr_glXCreateWindow(dpy, config, win, attribList); }
void (glXDestroyWindow)(Display * dpy, GLXWindow window) { stub_funcs.ptr_glXDestroyWindow(dpy, window); }
GLXPixmap (glXCreatePixmap)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attribList) { return stub_funcs.ptr_glXCreatePixmap(dpy, config, pixmap, attribList); }
void (glXDestroyPixmap)(Display * dpy, GLXPixmap pixmap) { stub_funcs.ptr_glXDestroyPixmap(dpy, pixmap); }
GLXPbuffer (glXCreatePbuffer)(Display * dpy, GLXFBConfig config, const int * attribList) { return stub_funcs.ptr_glXCreatePbuffer(dpy, config, attribList); }
void (glXDestroyPbuffer)(Display * dpy, GLXPbuffer pbuf) { stub_funcs.ptr_glXDestroyPbuffer(dpy, pbuf); }
void (glXQueryDrawable)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value) { stub_funcs.ptr_glXQueryDrawable(dpy, draw, attribute, value); }
GLXContext (glXCreateNewContext)(Display * dpy, GLXFBConfig config, int renderType, GLXContext shareList, int direct) { return stub_funcs.ptr_glXCreateNewContext(dpy, config, renderType, shareList, direct); }
int (glXMakeContextCurrent)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx) { return stub_funcs.ptr_glXMakeContextCurrent(dpy, draw, read, ctx); }
GLXDrawable (glXGetCurrentReadDrawable)(void) { return stub_funcs.ptr_glXGetCurrentReadDrawable(); }
int (glXQueryContext)(Display * dpy, GLXContext ctx, int attribute, int * value) { return stub_funcs.ptr_glXQueryContext(dpy, ctx, attribute, value); }
void (glXSelectEvent)(Display * dpy, GLXDrawable drawable, unsigned long mask) { stub_funcs.ptr_glXSelectEvent(dpy, drawable, mask); }
void (glXGetSelectedEvent)(Display * dpy, GLXDrawable drawable, unsigned long * mask) { stub_funcs.ptr_glXGetSelectedEvent(dpy, drawable, mask); }
__GLXextFuncPtr (glXGetProcAddressARB)(const GLubyte * _1) { return stub_funcs.ptr_glXGetProcAddressARB(_1); }
void (*glXGetProcAddress(const GLubyte * procname))(void) { return stub_funcs.ptr_glXGetProcAddress(procname); }
void * (glXAllocateMemoryNV)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority) { return stub_funcs.ptr_glXAllocateMemoryNV(size, readfreq, writefreq, priority); }
void (glXFreeMemoryNV)(GLvoid * pointer) { stub_funcs.ptr_glXFreeMemoryNV(pointer); }
int (glXBindTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer) { return stub_funcs.ptr_glXBindTexImageARB(dpy, pbuffer, buffer); }
int (glXReleaseTexImageARB)(Display * dpy, GLXPbuffer pbuffer, int buffer) { return stub_funcs.ptr_glXReleaseTexImageARB(dpy, pbuffer, buffer); }
int (glXDrawableAttribARB)(Display * dpy, GLXDrawable draw, const int * attribList) { return stub_funcs.ptr_glXDrawableAttribARB(dpy, draw, attribList); }
int (glXGetFrameUsageMESA)(Display * dpy, GLXDrawable drawable, float * usage) { return stub_funcs.ptr_glXGetFrameUsageMESA(dpy, drawable, usage); }
int (glXBeginFrameTrackingMESA)(Display * dpy, GLXDrawable drawable) { return stub_funcs.ptr_glXBeginFrameTrackingMESA(dpy, drawable); }
int (glXEndFrameTrackingMESA)(Display * dpy, GLXDrawable drawable) { return stub_funcs.ptr_glXEndFrameTrackingMESA(dpy, drawable); }
int (glXQueryFrameTrackingMESA)(Display * dpy, GLXDrawable drawable, int64_t * swapCount, int64_t * missedFrames, float * lastMissedUsage) { return stub_funcs.ptr_glXQueryFrameTrackingMESA(dpy, drawable, swapCount, missedFrames, lastMissedUsage); }

void close_opengl(void) {
    cosmo_dlclose(opengl);
}