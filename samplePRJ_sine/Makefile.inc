HELLO_WORLD_SRCS := \
tinyML/samplePRJ_sine/main.cc \
tinyML/samplePRJ_sine/main_functions.cc \
tinyML/samplePRJ_sine/model_data.cc \
tinyML/samplePRJ_sine/output_handler.cc \
tinyML/samplePRJ_sine/constants.cc

HELLO_WORLD_HDRS := \
tinyML/samplePRJ_sine/model_data.h \
tinyML/samplePRJ_sine/output_handler.h \
tinyML/samplePRJ_sine/constants.h \
tinyML/samplePRJ_sine/main_functions.h

#Find any platform - specific rules for this example.
include $(wildcard tinyML/samplePRJ_sine/*/Makefile.inc)

# Builds a standalone binary.
$(eval $(call samplePRJ_sine,\
$(HELLO_WORLD_SRCS),$(HELLO_WORLD_HDRS)))
