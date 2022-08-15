FROM ubuntu:latest
RUN mkdir -p /usr/src/app/
WORKDIR /usr/src/app
RUN apt update
RUN apt install build-essential -y
RUN apt install gdb -y