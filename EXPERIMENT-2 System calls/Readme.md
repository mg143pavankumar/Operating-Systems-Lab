### 2.1 OBJECTIVE

Write programs using the I/O system calls of UNIX/LINUX operating system
(open(), read(), write(), close(), fcntl(), lseek(), stat(), opendir(), readdir(), closedir()) 
1. Moving the contents from one file to another file (open(), read(), write(), close())
2. Displaying the list of the file and directories from the file (opendir(), readdir(), closedir())
3. Displaying file information (stat()) 
4. Program to change the position in the file (lseek()) 
5. Locking the file using fcntl() system call (fcntl()) 
 
### 2.2 RESOURCE 

Ubuntu Operating system

### 2.3 PROGRAM LOGIC

a. Moving the contents from one file to another file (move.c)

→ Used open system call opens the old file in read mode 
→ Used creat() system cal to create a new file to copy the content
→ Used read() system call to read the content from the file
→ Used write() system call to write the content to the new created file
→ Used close() system call to close the file

b. Displaying the list of the file and directories from the file(dir.c)

→ Used dirent structure
→ Used opendir() system call to open the directory
→ Used readdir() system call to read the contents from the directory
→ Used d_name member from dirent structure to display the name of the file/directory
→ Used closedir() system call to close the directory

The dirent structure contains the following fields for each directory entry:

{
ulong_t d_offset; /* actual offset of this entry */ 
ino_t d_ino; /* inode number of entry */ 
ushort_t d_reclen; /* length of this entry */
ushort_t d_namlen; /* length of string in d_name */ 
Char d_name[_D_NAME_MAX+1]; /* name of entry (filename) *
}

c. Displaying file information (stat1.c)

→ Used stat structure
→ Used stat() system call to display the file information
→ Used st_mode, st_size, st_uid, st_gid from stat structure

The stat structure contains the following fields for each file:
struct stat
{
mode_t st_mode;
ino_t st_ino;
dev_t st_dev;
dev_t st_rdev;
nlink_t st_nlink;
uid_t st_uid;
gid_t st_gid;
off_t st_size;
struct timspec st_atim;
struct timspec st_mtim;
struct timspec st_ctim;
blksize_t st_blksize;
blkcnt_t st_blocks;
};

d. Program to change the position in the file(lseek.c)

→ Create a text file using any editor to read the content from the file
→ Used open system call opens the old file in read mode 
→ Used read() system call to read the content from the file
→ Used lseek() system call to change the position in the file

e. Locking the file using fcntl() system call (fcntl.c)

→ The fcntl system call allows a program to place a read lock or a write lock on a file 
→ l_type field of the structure to F_RDLCK for a read lock or F_WRLCK for a write lock
→ Then call fcntl, passing a file descriptor to the file, the F_SETLCKW operation code, and a pointer to the 
struct flock variable 
