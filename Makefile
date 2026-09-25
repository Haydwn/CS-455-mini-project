# simple Makefile example

# create a compiler flags variable
SRCS=main.cpp \
	 Member.cpp \
	 Officer.cpp \
	 Event.cpp \
	 Date.cpp \
	 Time.cpp \
	 Datetime.cpp \
	 Club_roster.cpp \
	 Club_app.cpp \
	 Screen.cpp \
	 Menu.cpp \
	 Menu_item.cpp
OBJS=${SRCS:S/cpp$/o/g}
PROG=Club_app

CXXFLAGS=-Wall -std=c++23

.PHONY: all clean pack unpack

all: ${PROG}

${PROG}: ${OBJS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJS}

Member.o: Member.cpp Member.h Date.h

Officer.o: Officer.cpp Officer.h Member.h Date.h Officer_role.h

Event.o: Event.cpp Event.h Datetime.h

Date.o: Date.cpp Date.h

Time.o: Time.cpp Time.h

Datetime.o: Datetime.cpp Datetime.h Date.h Time.h

Club_roster.o: Club_roster.cpp Club_roster.h Member.h Officer.h Event.h

Club_app.o: Club_app.cpp Club_app.h Club_roster.h Screen.h Officer_role.h

Screen.o: Screen.cpp Screen.h Menu.h

Menu.o: Menu.cpp Menu.h Menu_item.h

Menu_item.o: Menu_item.cpp Menu_item.h

main.o: main.cpp Club_app.h

clean:
	@rm -f ${PROG} ${OBJ}

pack:
	@zip -j files.zip *.cpp *.h Makefile

unpack:
	@unzip -j files.zip
