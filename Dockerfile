FROM gcc:latest

COPY . /usr/src/

RUN mkdir -p /usr/src/
ADD /src/* /usr/src/

WORKDIR /usr/src/
RUN g++ -o main main.cpp
CMD ["./main"]