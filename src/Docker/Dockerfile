FROM ubuntu:16.04

RUN apt-get install && apt-get update

RUN apt-get install build-essential wget unzip -y

RUN apt-get install python3 psmisc openmpi-bin libopenmpi-dev openssh-client -y

RUN adduser --disabled-password -gecos "" test

WORKDIR /home/test

RUN wget https://raw.githubusercontent.com/fabricehuet/parallelismCourse/master/src/C/errorSharedOMP.c
RUN gcc errorSharedOMP.c -o errorSharedOMP -lm -fopenmp
