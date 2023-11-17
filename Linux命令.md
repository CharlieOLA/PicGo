## shell命令

在本目录下检索文件中的关键词：

```sh
grep "关键词"  ./ -rn
```

在本目录下检索含有关键词的文件：

```sh
find ./ -name "关键词"
```

允许挂载

```sh
showmount -e 192.168.204.128
```

接受挂载

```sh
mount -o nolock 192.168.204.128:/home/ola /mnt
```





## vim命令