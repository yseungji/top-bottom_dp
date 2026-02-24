기존의 sudoku 레포지토리를 연결해놨던 파일을 
ps 특성상 파일을 새로 만들지 않고 기존 파일에 작성했다.
이 파일을 github의 새로운 레포지토리에 올리기 위해 
기존의 연결을 해제하고 이 레포지토리에 재 연결하였다.

git remote remove origin
기존 오리진을 삭제 후

git remote add origin https://github.com/yourID/new-repository.git
다시 연결하였다.

이후 절차에 맞게 진행하였다.

이 경우에 기존의 commit은 삭제되지 않고 남아있다.
