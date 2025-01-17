# CWE-259 HARDCODED PASSWORD

### High Level Description of code and exploit
Code gets password from user by input and uses strcmp to compare it with the harcoded password. Exploit uses strings command and uses every line off of it as input and exit until the password is found.

### Steps to run code and exploit
- Put code.c and exploit.sh in one folder
- `gcc code.c -o code` to compile code
- `chmod +x exploit.sh` to change script permission
- `./exploit.sh ./code pass.txt` to run the script. pass.txt is just a random file name to put output of strings in.

# VIDEO
https://www.youtube.com/watch?v=6tI6cvjM6I0
