## HMVLabs - Venus

Venus is a beginner challenge to start learning linux and basic scripting. Based on it's challenge page, it's say that *"This is a beginner level so enjoy and be patient!"*.

So, let's start the challenge!!

### Connect to this Machine

Using SSH Connection to connect to this command:
```
ssh hacker@venus.hackmyvm.eu -p 5000
```
and input the password. The password was available on it's official website on this [link](https://hackmyvm.eu/venus/index.php).

### 001 - Venus

To start hacking, let's read the readme.txt on the machine first :D <br />
![image](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/e91ad7f3-a3f2-431f-97d3-d7fca20dc6c2)


After read the image, we know that we should open the mission.txt to know what mission we should solve. Let's open the file instead :D <br />
![venus-mission](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/25a31508-d312-4e5b-91b6-e925acca4dbb)


Okay, because the mission said that there is a hidden file in this folder. Let's take a look using `ls -lah` command. Then we found a file that named `.myhiddenpazz`. Open it and use to connect with user sophia using `su sophia` and insert the password that we found at previouz `.myhiddenpazz` file.

Go to home directory of user sophia and cat the flagz.txt.
![sophia-flagz](https://github.com/elshiraphine/hackmyvm.eu/assets/89353307/8c161d75-a536-40ba-855f-b526fd8b9ff8)
