git remote add origin https://github.com/SJJuunnY/Algorithm.git
git branch -M main
git push -u origin main

//로컬 깃 저장소 생성(.git 폴더 생성)
$ git init

//Working directory -> Staging Area
$ git add [directory]
$ git add .

//Staging Area -> repository(.git)
$ git commit -m "commit message"

//add + commit 한번에
$ git commit -am "commit message"

//원격저장소와 연결
$ git remote add origin [원격저장소 주소]

//현재 연결된 원격저장소 확인하기
$ git remote -v

//연결된 원격저장소 삭제하기
$ git remote remove [origin]

//연결하고 있던 원격저장소의 name이 변경되었을 때, 재설정
$ git remote set-url origin [원격저장소 주소]

//브랜치 명 바꾸기
$ git branch -M [branch name(main)]
$ git branch -m [현재 branch name] [바꾸고싶은 branch name]

//(선택) README.md가 있다면 : push 보다 pull 먼저
$ git pull origin [branch name(main)]

//로컬 레포지토리 -> 원격 레포지토리
$ git push -u origin [branch name(main)]


________________________________________________
//파일 수정 및 추가 이후 : 다음번 commit & push
$ git pull origin [branch name] (선택:다른 장소에서 작업한게 없으면 안해도 됨)
$ git add [directory]
$ git commit -m "commit message"
$ git push -u origin [branch name]
________________________________________________



//git clone == remote+pull
$ git clone [Repo_url] [directory]
$ git clone [Repo_url] .   (보통 이렇게 많이 쓴다)