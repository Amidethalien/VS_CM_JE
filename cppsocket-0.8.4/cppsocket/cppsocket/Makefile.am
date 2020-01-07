####### kdevelop will overwrite this part!!! (begin)##########
lib_LTLIBRARIES = libcppsocket.la


INCLUDES = $(all_includes)


LDFLAGS =  

libcppsocket_la_SOURCES = semaphore.cpp stringbuffer.cpp tcpthreadedserver.cpp thread.cpp tcpserver.cpp tcpclient.cpp tcpconnection.cpp udpnode.cpp socket.cpp address.cpp 


EXTRA_DIST = address.cpp address.h option.h socket.cpp socket.h exception.h buffer.h udpnode.h udpnode.cpp tcpconnection.h tcpconnection.cpp tcpclient.h tcpclient.cpp tcpserver.h tcpserver.cpp thread.cpp thread.h tcpthreadedserver.h tcpthreadedserver.cpp cppsocket.doc addrtut.doc lltut.doc hltut.doc netint.h stringbuffer.h stringbuffer.cpp license.doc semaphore.h semaphore.cpp 

####### kdevelop will overwrite this part!!! (end)############
SOMAJOR = 8
SOMINOR = 4
SOSUBMINOR = 8

# here you should add all header files, which contains the functionality
# of your shared lib (published for the users)
pkginclude_HEADERS = socket.h \
                  address.h \
                  buffer.h \
                  exception.h \
                  netint.h \
                  option.h \
                  semaphore.h \
                  stringbuffer.h \
                  tcpclient.h \
                  tcpconnection.h \
                  tcpserver.h \
                  udpnode.h \
                  tcpthreadedserver.h \
                  thread.h

# here you should add all header files, which shouldn
noinst_HEADERS =

libcppsocket_la_LDFLAGS = $(all_libraries) -no-undefined -version-info $(SOMAJOR):$(SOMINOR):$(SOSUBMINOR) $(LDFLAGS)

# add here the libraries which have to be include
# for building the shared lib
#
#  please consider also the usage of the make environment variables
#  like
#  $(LIB_KDEUI), $(LIB_QT), $(LIB_HTML), etc.
#  instead of the hardcoded entries, which have placed
#  in here.
#  The following line is only a suggestion!
#
libcppsocket_la_LIBADD = 

