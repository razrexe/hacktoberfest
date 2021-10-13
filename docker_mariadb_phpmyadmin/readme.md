# Docker (MariaDB & Phpmyadmin)

You can easily run Mariadb & Phpmyadmin without installing it to your local machine. Just using docker-compose and boom, you can run it for your development.

### How to Run

1. For serving up the database server. If you want to run in background, just add `-d` to this command.

```
docker-compose up
```

2. For serving down. `Maksure before run this command, you have already backup your database`. It will remove served containers.

```
docker-compose down
```

### References Config

1. [Docker](https://docs.docker.com/)
2. [Docker Compose](https://docs.docker.com/compose/)
3. [MariaDB](https://hub.docker.com/_/mariadb)
4. [PhpMyadmin](https://hub.docker.com/r/phpmyadmin/phpmyadmin)
