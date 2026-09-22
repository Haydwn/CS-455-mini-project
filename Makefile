# simple Makefile example

# create a compiler flags variable
SRCS=maiun.cpp \
	 member.cpp \
	 officer.cpp \
	 event.cpp \
	 date.cpp \
	 time.cpp \
	 datetime.cpp \
	 club_roster.cpp \
	 club_app.cpp \
	 screen.cpp \
	 menu.cpp \
	 menu_item.cpp
OBJS=${SRCS:S/cpp$/o/g}
PROG=club_app

CXXFLAGS=-Wall -std=c++23

.PHONY: all clean pack unpack

all: ${PROG}

${PROG}: ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

member.o: member.cpp member.h date.h

officer.o: officer.cpp officer.h member.h date.h officer_role.h

event.o: event.cpp event.h datetime.h

date.o: date.cpp date.h

time.o: time.cpp time.h

datetime.o: datetime.cpp datetime.h date.h time.h

club_roster.o: club_roster.cpp club_roster.h member.h officer.h event.h

club_app.o: club_app.cpp club_app.h club_roster.h screen.h officer_role.h

screen.o: screen.cpp screen.h menu.h

menu.o: menu.cpp menu.h menu_item.h

menu_item.o: menu_item.cpp menu_item.h

main.o: main.cpp club_app.h

clean:
	@rm -f ${PROG} ${OBJ}

pack:
	@zip -j files.zip *.cpp *.h Makefile

unpack:
	@unzip -j files.zip
