# 📃️ Déscription

---

Ces programmes sont inspirée des calcul et la mathématique .
Il y a en a 3 programmes que je vais vous les présentées :

- POINTS
- NOMBRE COMPLEXES
- ALGEBRE QUATERNIONS

---

## 🛠️ Outils Nécessaire :

---
Pour éxécuter ces programmes ,il faut avant tout installer des outils nécessaires dont les programmes ont besoin .

**Sous Linux** :

### Méthode 1 :
  
On peut installée un éditeur de texte et un IDE pour éxécuter le programme avec extension instalé (Visual Studio Code ,Code Blocks,...).
Je vous récommande d'installer Visual Studio Code également appelée VS Code(car il régorge beaucoup de fonctionnalité interessante).

Quand vous aurez installée l'editeur, installée ensuite les exetensions cpp ou c.
Une fois fait, vous pouvez éxécutée ces programmes en allant vers le dossier et le fichier.

### Méthode 2 :
  
Vous pouvez éxécutée directement via le terminal en utilisant la commande ci-dessous :

```bash
g++ fichier.cpp -o fichier
```

**Sous Windows** :

On installe un éditeur de texte et un IDE via son site web (par ex : le site de VS Code).
Et on installe les extension cpp ou c.
Une fois les extensions installée, vous pouvez compilée le programme directement sur l'éditeur VS code.
Ou vous pouvez le complilée via le terminal en tapant la commande analogue à celui de linux.

---

## 📘️ Déscription de chaque programme :

---

### 📐️ POINTS :

Cette programme consiste à calculer la distance et le milieu de 2 points saisie par l'utilisateur.


### 🧮️ NOMBRE COMPLEXES :

Cette programme est conçue pour calculer l'addition, la soustraction, la multiplication, la division de 2 nombres complexe entre par l'utilisateur, ainsi que sa module.
Un nombre complexe est de la forme :

$$a + bi$$  $$i^2=-1$$

### ⛓️ ALGÈBRE QUATERNIONS :

Cette programme est un peu similaire a celui du nombre complexe, a la diffference qu'il a 3 imaginaire et elle est non commutatif.
Un algèbre de quaternion est de la forme :

$$ a + bi + cj + dk   $$  $$ \mbox{ où } i^{2}=-1 , j^{2}=-1 , k^{2}=-1 , ij=k , jk=i , ki=j , ji=-k , kj=-i , ik =-j $$

---

## 📁️ Structure de projet

---

```text
.
├── Complexe
│   ├── complexe		# le fichier avec .cpp est le programme principale a compiler
│   ├── complexe.cpp            # le fichier avec .hpp est la module
│   └── complexe.hpp		
├── Point
│   ├── point
│   ├── point.cpp		
│   └── point.hpp
├── Quaternion
│   ├── quaternions
│   ├── quaternions_algebra.cpp
│   └── quaternions_algebra.hpp
└── README.md
```

---

> Auteur : RANDRIANOELINA Tifanioh Mahefa F.
