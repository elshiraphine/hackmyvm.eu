|Machine Name|Difficulty|OS|
|-|-|-|
|Movie|Medium|GNU/Linux|

## searching victim's ip address in my LAN network
![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/dd9a8a04-9664-4654-948a-d5b95e7bf0f2)

lets grab the ip addresses using regex with `grep`.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/73f3df94-d01e-4e5c-812f-8ecf99071acc)

and, here we go.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/5ad30cdd-8eed-4878-ba1a-63e5e5e64125)

## passive recon
*i wanna tell something that i hate the new name of reconnaissance, footprinting is suck :>*

here is my nmap result that scanned using rustscan for the fastest version. i also do nmap if rustscan has lack when doing scan. i wont share what commands i used for pentest, because, internet has large of resources to obtain from.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/c9faad91-bd7b-4018-ac1e-11918db6bfbc)

i do evilscan (simply like `nc -zv $victim 1-65535`) as well.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/15a3b950-2326-40e7-9e55-4261b3fe76ee)

well, there must be static site running on 80 port as always. and lets see how the site looks like.

## 80/tcp

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/4aad95b1-2683-49f8-856a-28f7c3dc6aaf)

just a simple AVI to MP4 conversion site, but how do i exploit it? i wanna record the website behavior to my burpsuite. ill be back after bruteforcing the site's directory.

## directory iteration

i did bruteforce to the directory using the fabulous automation, named it `feroxbuster`. preatty easy to use.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/14405eb7-c9e8-41e4-9602-5cf38e7b74d6)

as you seen in the picture above, there bunch of interesting directory to explore around such as, `sitemap.xml`, `login.php`, `upload.php`, etc. 
