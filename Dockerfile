FROM debian:buster-slim

# Install common tools
RUN \
    apt-get update -y && \
    apt-get install -y  --no-install-recommends \
        apt-transport-https \
        software-properties-common \
        ca-certificates \
        libcurl4 \
        wget \
        rsync \
        iotop

# Install complier tools
RUN \
    apt-get update -y && \
    apt-get install -y  --no-install-recommends \
        build-essential \
        gcc \
        g++ \
        python-dev \
        make \
        cmake

# Install c++ library dependency
ADD ./libs /dep
RUN /dep/boost/install.sh
RUN rm -rf /dep

# Container setting
WORKDIR /repo
