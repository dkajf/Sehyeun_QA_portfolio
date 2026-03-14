## Test scenario - 미니게임 점수 계산 및 턴 진행 검증
 - 트릭컬 미니게임 (야추)
 - 기존 야추 룰과 비교해 오류 혹은 특수 룰의 버그 확인, 유사 미니 게임들과의 룰 비교 검증을 해보았다.

### Test case Index

1. [내 턴 진행 시](#내-턴-진행-시)
2. 상대 턴 진행 시
3. 특수 룰 검증
4. 특수 족보 완성 시
5. 제한 시간동안 움직임이 없을 시


<br />

---
### 내 턴 진행 시

#### TC_ID
TC_MYTURN_001

#### Test Scenario
- 주사위 굴리기 후 특정 주사위 선택으로 점수를 고정한다

#### Precondition
- 게임이 정상적으로 시작된 상태
- 내 턴이 시작된 상태

#### Test Steps
1. 내 턴 안내 UI를 확인한다
2. 주사위 통 클릭으로 주사위를 굴린다
3. 원하는 주사위 클릭으로 주사위 점수를 고정한다

#### Expected Result
 - 주사위 애니메이션 정상 실행된다
 - 굴린 주사위 값이 UI 표시된다
 - 주사위 클릭 시 주사위가 고정 상태가 된다

#### Edge Case
 - 주사위를 굴릴 때 여러 번 클릭할 경우 동작 변화 여부
 - 주사위가 굴러가는 애니메이션 동안 클릭 입력 처리 여부
 - 굴러간 주사위와 고정된 주사위 값 유지 확인
<br />
<br />

#### TC_ID
TC_MYTURN_003

#### Test Scenario
- 일반 족보 주사위 점수 등록

#### Precondition
 - 게임이 정상적으로 시작된 상태
 - 내 턴이 시작된 상태

#### Test Steps
1. 내 턴 안내 UI를 확인한다


#### Expected Result


#### Edge Case
<br />
<br />

#### TC_ID
TC_MYTURN_004

#### Test Scenario
- 특수 족보 주사위 점수 등록

#### Precondition
 - 게임이 정상적으로 시작된 상태
 - 내 턴이 시작된 상태

#### Test Steps
1. 내 턴 안내 UI를 확인한다


#### Expected Result


#### Edge Case

<br />
<br />

### 상대 턴 진행 시

#### TC_ID
TC_MYTURN_006

#### Test Scenario
- 상대 턴 진행시 일부 행동을 제외한 내 입력 차단 검증

#### Precondition
 - 게임이 정상적으로 시작된 상태
 - 내 턴이 시작된 상태

#### Test Steps
1. 내 턴 안내 UI를 확인한다


#### Expected Result


#### Edge Case

---
<br />
<br />

#### TC_ID
TC_MYTURN_005

#### Test Scenario
- UI 안내 확인

#### Precondition
 - 게임이 정상적으로 시작된 상태
 - 내 턴이 시작된 상태

#### Test Steps
1. 내 턴 안내 UI를 확인한다


#### Expected Result


#### Edge Case
