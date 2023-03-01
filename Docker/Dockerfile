FROM gcc:4.9

COPY . /usr/src/dockertest1

WORKDIR /usr/src/dockertest1
RUN g++ -o main main.cpp
CMD ["./main"]
