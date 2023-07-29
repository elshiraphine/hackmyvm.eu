|Machine Name|Difficulty|OS|
|-|-|-|
|Movie|Medium|GNU/Linux|

# table of contents
* [searching victim's ip address in LAN Network.](#lan)
* [recon](#recon)

## searching victim's ip address in my LAN network. {#lan}
![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/dd9a8a04-9664-4654-948a-d5b95e7bf0f2)

lets grab only the ip addresses using regex with `grep`.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/73f3df94-d01e-4e5c-812f-8ecf99071acc)

and, here we go.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/5ad30cdd-8eed-4878-ba1a-63e5e5e64125)

## recon
here is my nmap result that scanned from rustscan for the fastest version.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/c3934bf6-581c-4775-ad9f-91b2d309bbf5)

i do evilscan (simply like `nc -zv $victim 1-65535`) as well.

![image](https://github.com/Satpamnesia/hackmyvm.eu/assets/44630640/15a3b950-2326-40e7-9e55-4261b3fe76ee)

