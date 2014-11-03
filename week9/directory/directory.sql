--
-- Database: `directory`
--

CREATE DATABASE IF NOT EXISTS `directory`;


--
-- Table structure for table `people`
--

CREATE TABLE IF NOT EXISTS `directory`.`people` (
  `id` INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  `name` VARCHAR(100) NOT NULL,
  `house` VARCHAR(20) NOT NULL,
  `age` INTEGER UNSIGNED NOT NULL,
  PRIMARY KEY (`id`)
);
