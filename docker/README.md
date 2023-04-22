
# build your Docker image by running the following command in your terminal:
docker build -t debian-ssh .

# Once the image is built, you can run a new container using the following command:
docker run -d -p 2222:22 --name debian-ssh-container debian-ssh

# If the following message (2) appears when you execute command (1)
    1: ssh root@localhost -p 2222
    2: "WARNING: REMOTE HOST IDENTIFICATION HAS CHANGED!" 
### Change the line that contains [localhost]:2222 <some_rsa_key>
### Change <some_rsa_key> to the valued contained in /etc/ssh/ssh_host_ecdsa_key.pub of the container that was just created
