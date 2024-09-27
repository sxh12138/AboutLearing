# 一、美化

## 1.1 oh-my-posh

### 1.1.1 windows 美化

```shell
# 安装（注意环境变量）
$ winget install JanDeDobbeleer.OhMyPosh -s winget
# 下载 nerd 字体
# 使用
$ New-Item -Path $PROFILE -Type File -Force
$ notepad $PROFILE
$ oh-my-posh init pwsh | Invoke-Expression
$ . $PROFILE
$ oh-my-posh disable notice
```

### 1.1.2 arch linux 美化

```shell
[sxh@sxh ~]$ mkdir bin
[sxh@sxh ~]$ curl -s https://ohmyposh.dev/install.sh | bash -s -- -d ~/bin
[sxh@sxh ~]$ vim .bashrc
PATH=$PATH:/home/sxh/bin
eval "$(oh-my-posh init bash)"
[sxh@sxh ~]$ . .bashrc
[sxh@sxh ~]$ oh-my-posh disable notice
```

# 二、ssh 基础设置

```shell
[sxh@sxh ~]$ ssh-keygen -t rsa -b 4096 -C "shiyuhanga@163.com"
$ cat ~/.ssh/id_rsa.pub
$ ssh -T git@github.com
```

# 三、git 基础设置

```shell
$ git config --global user.name "sxhwin"
$ git config --global user.email "shiyuhanga@163.com"
$ git config --global color.ui auto
```

# 四、wsl 安装及使用

```shell
用法: wsl.exe [Argument] [Options...][CommandLine]

运行 Linux 二进制文件的参数:

    如果未提供命令行，wsl.exe 将启动默认 shell。

    --exec、-e <CommandLine>
        不使用默认 Linux shell 执行指定命令。

    --
        按原样传递剩余命令行。

选项:
    --cd <Directory>
        将指定目录设置为当前工作目录。
        如果使用 ~，则将使用 Linux 用户的主路径。如果路径以 / 字符开头，
        它将被解释为绝对 Linux 路径。
        否则，该值必须是绝对 Windows 路径。

    --distribution、-d <Distro>
        运行指定的分发。

    --user、-u <UserName>
        以指定用户身份运行。

    --system
        为系统分发启动 shell。

用于管理适用于 Linux 的 Windows 子系统的参数:

    --help
        显示用法信息。

    --install [Options]
        安装其他适用于 Linux 的 Windows 子系统分发。
        有关有效分发的列表，请使用“wsl --list --online”。

        选项:
            --distribution、-d [Argument]
                按名称下载并安装分发。

                参数:
                    有效的分发名称(不区分大小写)。

                示例:
                    wsl --install -d Ubuntu
                    wsl --install --distribution Debian

            --no-launch, -n
                安装后不启动发行版。

    --mount <Disk>
        在所有 WSL2 分发中附加和安装物理磁盘。

        选项:
            --bare
                将磁盘附加到 WSL2，但不要装载它。

            --type <Type>
                装载磁盘时使用的文件系统，如果未指定，则默认为 ext4。

            --options <Options>
                其他装载选项。

            --partition <Index>
                要装载的分区索引，如果未指定，则默认为整个磁盘。

    --set-default-version <Version>
        更改新分发的默认安装版本。

    --shutdown
        立即终止所有正在运行的分发和 WSL 2
        轻型实用程序虚拟机。

    --status
        显示适用于 Linux 的 Windows 子系统的状态。

    --卸载 [Disk]
        从所有 WSL2 分发中卸载并分离磁盘。
        如果不带参数调用，则卸载并分离所有磁盘。

    --更新 [Options]
        如果未指定任何选项，将从 Microsoft Store 下载并安装 WSL。

        选项:
            --回滚
                恢复到 WSL 2 内核的先前版本。

            --inbox
                仅更新收件箱 WSL 2 内核。不从 Microsoft Store 安装 WSL。

            --web-download
                从 internet 而不是 Microsoft  Store 下载 WSL 的最新版本。
用于在适用于 Linux 的 Windows 子系统中管理分发的参数:

    --export <Distro> <FileName>
        将分发导出为 tar 文件。
        对于标准输出，文件名可以是 -。

    --import <Distro> <InstallLocation> <FileName> [Options]
        将指定的 tar 文件作为新分发导入。
        文件名可以是 - 用于标准输入。

        选项:
            --version <Version>
                指定用于新分发的版本。

    --list, -l [Options]
        列出分发。

        选项:
            --所有
                列出所有分发，包括当前
                正在安装或卸载的分发。

            --正在运行
                仅列出当前正在运行的分发。

            --安静的, -q
                仅显示分发名称。

            --详细的, -v
                显示有关所有分发的详细信息。

            --在线，-o
                显示可使用“wsl --install”安装的可用分发列表。

    --set-default, -s <Distro>
        将分发设为默认值。

    --set-version <Distro> <Version>
        更改指定分发的版本。

    --终止, -t <Distro>
        终止指定的分发。

    --取消注册 <Distro>
        取消注册分发并删除根文件系统。
```

# 五、Arch 安装及配置

## 5.1 安装

```shell
# 下载地址：https://github.com/yuk7/ArchWSL/releases/download/24.4.28.0/Arch.zip
# 解压后两次双击运行Arch.exe
```

## 5.2 配置

### 5.2.1 .wslconfig

```shell
# "C:\Users\shiyuhang\.wslconfig"
[wsl2]
memory=4GB
swap=4GB

[experimental]
autoMemoryReclaim=gradual
networkingMode=mirrored
dnsTunneling=true
firewall=true
autoProxy=true
```

### 5.2.2 创建用户

```shell
# 给 root 设置密码：123123
[root@sxh Arch]# passwd
New password:
Retype new password:
passwd: password updated successfully
# 创建用户 sxh 并设置密码
[root@sxh Arch]# echo "%wheel ALL=(ALL) ALL" > /etc/sudoers.d/wheel
[root@sxh Arch]# useradd -m -G wheel -s /bin/bash sxh
[root@sxh Arch]# passwd sxh
New password:
Retype new password:
passwd: password updated successfully
[root@sxh Arch]# exit
# 在 Arch.exe 所在文件夹下打开 powershell
$ .\Arch.exe config --default-user sxh
```

### 5.2.3 pacman 设置

```shell
[sxh@sxh ~]$ sudo pacman-key --init
[sxh@sxh ~]$ sudo pacman-key --populate
[sxh@sxh ~]$ sudo pacman -Syy archlinux-keyring
[sxh@sxh ~]$ sudo pacman -Syyu
[sxh@sxh ~]$ sudo pacman -S git openssh base-devel cmake tree which unzip wget
```

# 六、Code

```shell
$ mkdir AbortLearing
$ cd AbortLearing
$ git init
$ git add .
$ git commit -m "first commit"
$ git branch -M main
$ git remote add origin git@github.com:sxh12138/AboutLearing.git
$ git push -u origin main --force
$ git branch --set-upstream-to=origin/main main
```

# 七、安装 Python

```shell
$ wget https://www.python.org/ftp/python/3.12.6/Python-3.12.6.tar.xz && tar -xvf Python-3.12.6.tar.xz && rm -rf *.tar.xz && cd Python-3.12.6
$ sudo ./configure && sudo make -j 4 && sudo make install
$ sudo ln -s /usr/local/bin/python3 /usr/local/bin/python
```

# 八、安装 R

```shell
$ sudo pacman -S r
$ R
install.packages("ggplot2")
q()
$ sudo pacman -S r
```