FROM debian

RUN apt-get update && \
    apt-get install -y openssh-server && \
    mkdir /var/run/sshd && \
    echo 'root:password' | chpasswd && \
    sed -i 's/#PermitRootLogin prohibit-password/PermitRootLogin yes/' /etc/ssh/sshd_config && \
    sed -i 's/#PasswordAuthentication yes/PasswordAuthentication yes/' /etc/ssh/sshd_config && \
    apt install -y nano && apt install -y cmake && \
    apt install -y build-essential && apt install -y git && \
    apt install -y curl && apt install -y wget && apt install -y htop && \
    cat /etc/ssh/ssh_host_ecdsa_key.pub

EXPOSE 22

CMD ["/usr/sbin/sshd", "-D"]