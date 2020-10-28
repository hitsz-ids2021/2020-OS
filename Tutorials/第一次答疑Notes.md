# 课程预备及快速入手

1. 安装虚拟机

   有一个已经安装好的系统，和一个自定义的用户账户可以登录。
   

[Linux 安全] 

 - 尽量避免直接使用`root`账户登录，使用`sudo`提权
  - 记住你的用户密码和root密码

2. 一个新安装的环境，需要做哪些设置，使得能够尽快上手，搭建我们需要的开发环境？

   - 换源

     最简单的办法：图形化界面选择 About-> Updates

     或者终端设置

     备份：`sudo cp /etc/apt/sources.list /etc/apt/sources.list.backup`

     修改 `sudo vim /etc/apt/source.list`

     常用的国内源有阿里源，清华源，中科大源等

   - 更新软件

     `sudo apt-get update`

     `sudo apt-get upgrade`
   
   - 安装开发所需的软件
   
     `sudo apt-get install build-essential make git vim`
     
     **常用工具清单** 
     
     -- `python3`
     
     -- JDK
     
     -- 网络传输 `curl wget`
     
     -- SSH： openssh-server
     
     -- Mysql

**[概念]**： 源、包管理器、Linux文件后缀名

3. 常用命令的简单使用

   调出终端： Ctrl+Alt+T， 右键， 

   - Tab键， 向上方向键

   - 命令手册`man`，以及`help`的使用

   - `cd`: change current directory,  Linux目录， 相对路径和绝对路径；

     `cp`: copy

     `mv`: move

     `clear`

     `ls`:  list
     
     `sudo` :super user do
     
     `touch`和`mkdir`: make directory
     
     `rm` :remove
     
     `apt-get`

    建议：鸟哥的Linux私房菜（基础学习篇）

   - 终端编辑工具`vim`或者`gedit`

     插入，保存，退出，查找，替换，删除

   - `git`的使用

     先来一张图说明git的工作过程

     http://ixiaosi.art/2019/01/10/git/git%E4%BB%8B%E7%BB%8D/

     `git`的常用命令：

     ```
     git config --global user.name user.email
     ssh-keygen -t rsa -C "youremail@example.com" #
     git clone url [dir]
     git add [file]
     git status 
     git diff
     git commit -m "a Message"
     git remote -v
     git push origin master
     git pull
     
     ```

     git 分支，版本回推等

   - `gcc`的使用

     `gcc` 编译工具链

      make

     常用

     ```shell
     gcc a.c
     gcc a.c -o a
     预处理 gcc -E -o a.i a.c
     编译 gcc -S -o a.s a.c (cc/cl)
     汇编 gcc -c -o a.o a.c (as)
     链接 gcc a.o b.o c.o (ld)
     -I. -lpthread  -g(-O1, -O2, -O3) -Ldir -static -share -Wall
     ```

     反汇编： `objdump`, `readelf`

   - **实验演示**

   - 推荐：

     用户管理，文件管理，重定向，管道

     shell 脚本

      Linux三剑客 `grep`, `sed`和`awk`

   - 终端美化：

     将shell换成oh-my-zsh

     安装vim插件： .vimrc
     
   - 更多更好用的Linux命令：

     `echo`, `cat`, `who`, `which`, `whereis`, `chgrp`, `chown`, `chmod`, `usradd`, `file`, `less`, `more`,`tar`

4. 额外项

   - 虚拟机如何与宿主机交互——VMware Tools
   - 虚拟机如何与宿主机交换文件——共享文件夹
   - 虚拟机如何与宿主机网络互连——桥接 
   - 快照——存档
   - `bash.rc`和`bash_profile`， 隐藏文件夹

   挂载共享文件夹

   先启用共享文件夹

   ```
   sudo apt update
   sudo apt-get install open-vm-tools open-vm-tools-dev
   sudo mkdir /mnt/hgfs
   sudo vmhgfs-fuse .host:/ /mnt/hgfs
   sudo su
   有可能每次重启都要重新挂载
   ```

   

