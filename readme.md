# LevelUpUniv

편입준비

## git

### push 하기

우선, `git`을 *initialize(초기화, 시작)* 해준다.

```bash
git init
```

다음으로, `stage`에 모든 파일을 추가(`add`)해준다.

이 때에, 옵션(`-`로 표현)으로 모든 파일을 추가해야하므로 `-A`와 같이 표현한다.

```bash
git add -A
```

다음으로 `stage`에 올라와 있는 파일들을 `commit` 해주어야 한다.

이 때에, `-m` 옵션으로 `commit` *메시지*를 추가해줄 수 있다.

```bash
git commit -m "commit msg"
```

다음으로 `commit`한 것을 최종적으로 `push` 해줄 것이다.

```bash
git push origin master
```

### pull 하기

우선, `git`을 *initialize(초기화, 시작)* 해준다.

```bash
git init
```

다음으로, 원격 저장소를 지정해준다.

```bash
git remote add origin "https://github.io/...."
```

다음으로 `pull` 해준다.

```bash
git pull origin master
```