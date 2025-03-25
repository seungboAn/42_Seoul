NAME	= inception

DB_PATH		:= /home/seuan/data
HOST_LINK	:= "127.0.0.1	seuan.42.fr" > /etc/hosts

all		:	$(NAME)

$(NAME)	:
	@sudo mkdir -p $(DB_PATH)/mariadb/
	@sudo mkdir -p $(DB_PATH)/wordpress/
	@sudo echo $(HOST_LINK)
	@sudo docker-compose -f ./srcs/docker-compose.yaml up --build -d

# docker-compose down and remove volumes
clean	: 
	@sudo sudo docker-compose -f ./srcs/docker-compose.yaml down --rmi "all" --volumes

## delete local volume
fclean	: clean 
	@sudo sudo rm -rf $(DB_PATH)

re	: fclean all

.PHONY	: all clean fclean re
