## HMVLabs - Venus

Venus is a beginner challenge to start learning linux and basic scripting. Based on it's challenge page, it's say that *"This is a beginner level so enjoy and be patient!"*.

So, let's start the challenge!!

### Connect to this Machine

Using SSH Connection to connect to this command:
```sh
ssh hacker@venus.hackmyvm.eu -p 5000
```
and input the password. The password was available on it's official website on this [link](https://hackmyvm.eu/venus/index.php).

### 001 - Venus

To start hacking, let's read the readme.txt on the machine first :D <br />
![image](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/e91ad7f3-a3f2-431f-97d3-d7fca20dc6c2)


After read the image, we know that we should open the mission.txt to know what mission we should solve. Let's open the file instead :D <br />
![venus-mission](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/25a31508-d312-4e5b-91b6-e925acca4dbb)


Okay, because the mission said that there is a hidden file in this folder. Let's take a look using `ls -lah` command. Then we found a file that named `.myhiddenpazz`. Open it and use to connect with user sophia using `su sophia` and insert the password that we found at previouz `.myhiddenpazz` file.

Go to home directory of user sophia and cat the flagz.txt. <br />
![sophia-flagz](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/8c161d75-a536-40ba-855f-b526fd8b9ff8)

### 002 - Sophia

Let's move to the sophia challenge and take a look of it's mission.

The mission said that user angela does not remember where she place the `whereismypazz.txt`. So let's find the specific file using this command:
```sh
find / -name "whereismypazz.txt" -print 2>/dev/null
```

The find command will find `whereismypazz.txt` file on `/` path, and will redirect the error message to `/dev/null`. Gotcha! The file was found in `/usr/share/whereismypazz.txt`. Let's open that file and use it to connect with user angela then go to home directory of user angela and cat the flagz.txt.

### 003 - Angela

Yo! We made it here and let's open the next mission!

The mission said that user emma is in line 4069 of file `findme.txt`. It's easy because we can find the specific line using awk
```
awk 'NR==4069' findme.txt
```

Let's try to connect with user emma using that password and gotcha we successfully connected to user emma :D. Then, go to home directory and cat the flag!

### 004 - Emma

Open the mission and it will say that user mia has left her password in - files.

This is a little bit tricky because it requires some attentions to work with dashed filename in unix/linux because dash (-) is generally used by commands to specify options and arguments.

So let's cat the file using the dot (current directory)
```

```

Then we found mia's password. Let's connect to user mia with that password and cat the flagz.txt.

### 005 - Mia

Open the mission and based on the mission, we should find camila's password in folder `hereiam`.

Let's use the same approach as [sophia's](#002---sophia) approach but we need to add flag `-type d` because we need to find a directory.
```sh
find / -type d -name "hereiam" 2>/dev/null
```

Consequently, the directory can be located at `/opt/hereiam`. Let's list all the file of the directory and cat the `.here` file.

Yey, we found the camila's password! So, let's connect ang get the flag :D

### 006 - Camila

Based on the mission, user luna jas left her password inside the muack folder. 

Let's take a look the folder.

Muack folder have so many directory and subdirectory and searching for them individually would become exceedingly exhausting, so let's just using find command with `type -f` flag that indicate we want to search a file instead of directory.
```
find . -type f
```

Yay, the file was found in `./111/111/muack` and let's just cat the file and use the password to connect to user luna. Then, go cat the flagz.txt :D


### 007 - Luna

The mission said that user eleanor has left her password in a file that occupies 6969 bytes.

Let's find the 6969 bytes file using `-size` flag
```sh
find / -size 6969c 2>/dev/null
```

That's mean we want to find the file that have 6969 bytes (character) in directory `/`. The file was found in `/usr/share/moon.txt`. Let's cat the text, connect to the user eleanor and get the flag.

### 008 - Eleanor

Yey you made to this! Let's open the mission and it said that user victoria has left her password in a file in which the owner is the user violin.

So let's find the file by its owner using `-user` flag
```sh
find / -user violin -type f 2>/dev/null
```

Gotcha, the file was found in `/usr/local/games/yo`. Let's go to the directory.

Open the `yo` file and connect to user victoria then get the flaggggg XD

### 009 - Victoria

We made to #09 mission. Based on the mission, user isla has left her password in a zip file.

Okay let's try to unzip the zip file.

It's said that we cannot create a folder because permission is denied. So, because at first mission we can use /tmp folder to write a file, let's just unzip it to `/tmp` folder.

Then, let's just cat the output `/tmp/pwned/victoria/passw0rd.txt` and use the password to connect to user isla and get the flag.

### 010 - Isla

The mission said that The password of the user violet is in the line that begins with a9HFX.

Let's just cat the `passy` file and pip it with grep the `a9HFX` strings and use `^` symbols to indicate that we want the `a9HFX` is the beginning of the string.

```
cat passy | grep '^a9HFX' | awk '{print substr($1,6); }'
```

But, because the `a9HFX` string is not the part of the password, so let's just the print the substring started with index 6 using awk.

Gotcha, we found the password to connect to the user violet and get the flag.
