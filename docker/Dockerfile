FROM debian

RUN apt-get update && \
    apt-get install -y openssh-server && \
    mkdir /var/run/sshd && \
    echo 'root:password' | chpasswd && \
    sed -i 's/#PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config && \
    sed -i 's/#PasswordAuthentication yes/PasswordAuthentication yes/' /etc/ssh/sshd_config && \
    apt install nano && apt install cmake && \
    apt install build-essential && apt install git && \
    apt install curl && apt install wget && apt install htop \
    cat /etc/ssh/ssh_host_ecdsa_key.pub

EXPOSE 22

CMD ["/usr/sbin/sshd", "-D"]