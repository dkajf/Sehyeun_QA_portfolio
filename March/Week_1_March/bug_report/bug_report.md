## Bug Report 01 - 특정 장소에서 자동 이동 로직의 무한 반복

### Environment
- OS: Windows 11
- Game : Arknights: Endfield

### Severity
Major

> UI 조작이 불가능해지며, 클라이언트를 강제 종료 해야하는 상황 발생

### Priority
Medium

> 발생 위치가 맵 외곽이며, 재접속시 정상 복구됨으로 긴급성 낮음

### Reproduction Steps
 1. 맵 상 특정 이동 불가 구역 경계까지 캐릭터를 이동한다
 2. 해당 위치에서 이동 불가 구역으로 전진 입력을 유지한다

### Expected Result
- 이동 불가 구역 진입 시 화면 점멸과 함께 캐릭터는 자동으로 반대 방향으로 돌아서 구역 밖까지 걸어 나온다
- 캐릭터가 이동 불가 구역을 빠져 나온 이후 정상 조작 할 수 있게된다

### Actual Result
- 캐릭터가 뒤로 돌아 걸어 나왔지만 자동 이동 로직이 추가로 발동한다
- 캐릭터가 제자리에서 돌기만 하고 이동 불가 구역을 벗어나지 못했다
- 대부분의 UI 조작이 불가능했고 클라이언트를 강제 종료 해야했다

### Notes
 - 맵 UI 를 열었음에도 로직이 중단되지않고, 조작이 불가능하여 강제 종료를 하였다.


    ![해당 상황](./evidence/bug_01.gif)


<br />
<br />
<br />

## Bug Report 02 - 뱅가드 버프 스킬 사용 시 클라이언트 강제 종료

### Environment
- OS : Windows 11
- Game : DNF

### Severity
Critical

> 던전 진행이 사실상 불가함

### Priority
Highest

> 플레이에 치명적, 즉각 수정 필요

### Reproduction Steps
 1. 뱅가드 캐릭터로 게임 접속
 2. 임의의 던전 입장
 3. 던전 내부에서 직업 버프 사용

## Expected Result
- 버프 정상 적용 후 게임 정상 진행

## Actual Result
- 버프 사용 직후 클라이언트 강제 종료

## Notes
- 21년 1월 게임 클라이언트 업데이트 당시 뱅가드 버프 스킬이 코드 누락이되어 스킬 사용시 클라이언트 충돌이 일어나 강제 종료가 되었음
![당시 상황](./evidence/bug_02.png)

<br />
<br />
<br />

## Bug Report - 해체기 UI의 신고하기 버튼이 무기고 UI에 의해 가려져도 클릭되는 현상

### Environment
- OS: Windows 11
- Game : DNF

### Severity
Minor

> 게임 진행에 큰 영향 없음

### Priority
Low

> 유저에게 다소 혼란을 유래하나 수정 긴급성은 낮음

### Reproduction Steps
 1. 다른 유저의 해체기를 클릭, 해체기 UI를 연다
 2. 장비창의 무기고 버튼을 클릭 UI를 연다
 3. 무기고 UI로 가려진 해체기 UI의 신고하기 버튼이 있는 곳을 클릭

### Expected Result
- UI 레이어상 장비 시뮬레이션 UI가 입력을 우선 처리하여 해체기 UI의 신고 버튼이 클릭 되지 않아야함

### Actual Result
- 신고하기 버튼이 클릭되고, 신고 UI가 출력

    ![현재 상황](./evidence/bug_03.gif)

### Notes
 - UI 레이어 우선순위 처리 문제로 추정됨
 - 수정 후 리그레션 테스트로 타 UI와의 버그도 확인 필요

<br />
<br />