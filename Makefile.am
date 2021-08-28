CARGO_VERSION = 1.56


AM_CPPFLAGS = -I$(srcdir)/include -DDEFAULT_TARGET=\"@target@\" -DCARGO_VERSION=\"$(CARGO_VERSION)\"

AM_CXXFLAGS = -std=c++17

bin_PROGRAMS = lc-cargo

lib_LTLIBRARIES = libcargo.la

libcargo_la_SOURCES = libcargo/libcargo.cpp

lc_cargo_SOURCES = cargo/main.cpp

lc_cargo_LDADD = libcargo.la