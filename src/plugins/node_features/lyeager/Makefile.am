# Makefile for node_features_lyeager plugin

AUTOMAKE_OPTIONS = foreign

PLUGIN_FLAGS = -module -avoid-version --export-dynamic

AM_CPPFLAGS = -I$(top_srcdir) -I$(top_srcdir)/src/common

pkglib_LTLIBRARIES = node_features_lyeager.la
node_features_lyeager_la_SOURCES = node_features_lyeager.c
node_features_lyeager_la_LDFLAGS = $(PLUGIN_FLAGS)

force:
$(node_features_lyeager_la_LIBADD) : force
	@cd `dirname $@` && $(MAKE) `basename $@`
