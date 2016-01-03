# toy-filesystem

Important Commands :
sudo insmod <kernel-driver>
sudo rmmod <kernel-driver>

Test :
touch image
mkdir dir
sudo mount -o loop -t <File System Name > ./image ./dir
sudo unmount ./dir
