FROM gcc:latest

RUN apt-get update && apt-get install -y git cmake

WORKDIR /usr/myapp

RUN git clone --recurse-submodules https://github.com/tosbala/sample-cpp-container.git

WORKDIR /usr/myapp/sample-cpp-container/build

RUN cmake ..
RUN make MyApp

CMD ["./MyApp"]
