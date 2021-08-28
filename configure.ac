AC_INIT([lc-cargo], [0.1])
AC_CONFIG_SRCDIR([install-sh])

AC_CONFIG_MACRO_DIRS([m4/])

AC_CANONICAL_HOST
AC_CANONICAL_TARGET dnlTODO, need to map this to rustc targets. That will be fun.

AM_INIT_AUTOMAKE([subdir-objects])

AM_PROG_AR
AC_PROG_CC
AC_PROG_CXX

LT_INIT

AC_CHECK_LIB([curl],[curl_easy_init],[
    LIBS="-lcurl $LIBS"
],[
    AC_MSG_ERROR([Missing required package libcurl])
])

AM_MAINTAINER_MODE

AC_CONFIG_FILES([Makefile])

AC_OUTPUT