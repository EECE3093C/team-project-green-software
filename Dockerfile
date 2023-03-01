FROM gcc:4.9

COPY . /usr/src/

RUN mkdir -p /usr/src/
ADD /src/* /usr/src/

WORKDIR /usr/src/
RUN g++ -o ccode test.cpp
CMD ["./ccode"]