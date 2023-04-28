# Libft

[![jdubilla's 42 Libft Score](https://badge42.vercel.app/api/v2/clh0zpc7j005408l9j6q6srae/project/2422752)](https://github.com/JaeSeoKim/badge42)

## Introduction

Le projet **libft** est le premier projet du cursus de l'ecole 42, il consiste à recréer un certain nombre de fonctions standard de la bibliothèque C, ainsi que quelques fonctions supplémentaires qui seront utilisées tout au long du cursus à 42. Le but de ce projet est de nous apprendre à bien comprendre comment fonctionnent ces fonctions, à les implémenter nous-mêmes et à les utiliser efficacement.

## Utilisation

Pour utiliser la bibliothèque **libft**, il faut la compiler en une bibliothèque statique (libft.a). Pour ce faire, on peux exécuter la commande **make** à la racine du projet.

Une fois la bibliothèque compilée, on peux l'utiliser en incluant le fichier libft.h dans notre code source et en liant notre programme avec libft.a lors de la compilation.

## Fonctions

### La bibliothèque libft comprend les fonctions suivantes :

#### * Fonctions de manipulation de mémoire

  * ft_memset
  * ft_bzero
  * ft_memcpy
  * ft_memccpy
  * ft_memmove
  * ft_memchr
  * ft_memcmp

#### * Fonctions de manipulation de chaînes de caractères

  * ft_strlen
  * ft_strlcpy
  * ft_strlcat
  * ft_strchr
  * ft_strrchr
  * ft_strnstr
  * ft_strncmp
  * ft_atoi
  * ft_strdup
  * ft_substr
  * ft_strjoin
  * ft_strtrim
  * ft_split
  * ft_itoa
  * ft_strmapi
  * ft_putchar_fd
  * ft_putstr_fd
  * ft_putendl_fd
  * ft_putnbr_fd

#### * Fonctions de manipulation de listes chaînées

  * ft_lstnew
  * ft_lstadd_front
  * ft_lstsize
  * ft_lstlast
  * ft_lstadd_back
  * ft_lstdelone
  * ft_lstclear
  * ft_lstiter
  * ft_lstmap
