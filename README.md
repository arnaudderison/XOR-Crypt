# XOR-Crypt

xorcrypt is a simple [symmetric cryptography](https://fr.wikipedia.org/wiki/Cryptographie_sym%C3%A9trique#:~:text=La%20cryptographie%20sym%C3%A9trique%2C%20%C3%A9galement%20dite,les%20%C3%89gyptiens%20vers%202000%20av.) software based from [**XOR**](https://en.wikipedia.org/wiki/XOR_cipher) encryption.

# Usage

```
gcc ./src/main.c -o xorcrypt
```

```
Encrypt file:    xorcrypt -c [Filename] [Key] [Destination]
Decrypt file:    xorcrypt -d [Filename] [Key] [Destination]
```